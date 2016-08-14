/*
** show_list.c for show_list.c in /home/lopez_i/traitements/linked_list
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Jun 11 17:50:33 2016 loic lopez
** Last update Sat Jun 11 18:40:32 2016 loic lopez
*/

#include "list.h"

void	show_list(t_listdata *data)
{
  t_list	*tmp;

  tmp = data->start;
  while (tmp != NULL)
    {
      my_printf("%s\n", tmp->line);
      tmp = tmp->next;
    }
}
