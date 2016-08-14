/*
** free_list.c for free_list.c in /home/lopez_i/traitements/linked_list
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Jun 11 17:51:11 2016 loic lopez
** Last update Sat Jun 11 18:18:01 2016 loic lopez
*/

#include "list.h"

void	free_list(t_listdata *data)
{
  t_list	*tmp;

  tmp = data->start;
  while (tmp != NULL && tmp->next != NULL)
    {
      tmp = tmp->next;
      free(tmp->prev->line);
      free(tmp->prev);
    }
  free(data->end->line);
  free(data->end);
}
