/*
** delete_link.c for delete_link.c in /home/lopez_i/traitements/linked_list
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Jun 11 17:49:40 2016 loic lopez
** Last update Sat Jun 11 18:20:14 2016 loic lopez
*/

#include "list.h"

t_list	*delete_start_link(t_list *tmp, t_listdata *data)
{
  tmp = tmp->next;
  free(tmp->prev->line);
  free(tmp->prev);
  tmp->prev = NULL;
  data->start = tmp;
  return (tmp);
}

t_list	*delete_end_link(t_list *tmp, t_listdata *data)
{
  tmp = tmp->prev;
  free(tmp->next->line);
  free(tmp->next);
  tmp->next = NULL;
  data->end = tmp;
  return (tmp);
}

t_list	*delete_link_simple(t_list *tmp)
{
  tmp->prev->next = tmp->next;
  tmp->next->prev = tmp->prev;
  free(tmp->line);
  free(tmp);
  return (tmp);
}

void	delete_link(t_listdata *data, char *delete_link)
{
  t_list	*tmp;

  tmp = data->start;
  while (tmp != NULL)
    {
      if (my_strncmp(delete_link, tmp->line, my_strlen(delete_link)) == 0)
	{
	  if (tmp->next != NULL && tmp->prev != NULL)
	    {
	      tmp = delete_link_simple(tmp);
	      break ;
	    }
	  else if (tmp->next == NULL)
	    {
	      tmp = delete_end_link(tmp, data);
	      break ;
	    }
	  else if (tmp->prev == NULL)
	    {
	      tmp = delete_start_link(tmp, data);
	      break ;
	    }
	}
      tmp = tmp->next;
    }
}
