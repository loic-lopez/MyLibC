/*
** my_put_in_list.c for my_put_in_list.c in /home/lopez_i/traitements/linked_list
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Jun 11 17:51:46 2016 loic lopez
** Last update Sat Jun 11 18:18:12 2016 loic lopez
*/

#include "list.h"

void	my_put_in_list(t_listdata *data, char *line)
{
  t_list	*new_elem;

  if ((new_elem = malloc(sizeof(t_list))) == NULL)
    return ;
  new_elem->line = my_strdup(line);
  if (data->start == NULL && data->end == NULL)
    {
      data->start = new_elem;
      data->end = new_elem;
      new_elem->next = NULL;
      new_elem->prev = NULL;
    }
  else
    {
      new_elem->prev = data->end;
      new_elem->next = NULL;
      data->end->next = new_elem;
      data->end = data->end->next;
    }
}
