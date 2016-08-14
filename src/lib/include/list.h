/*
** list.h for list.h in /home/lopez_i/.lib/lib/list/include
**
** Made by loic lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Sat Jun 11 17:54:15 2016 loic lopez
** Last update Sat Jun 11 19:06:29 2016 loic lopez
*/

#ifndef LIST_H_
# define LIST_H_

#include "lib.h"

typedef	struct	s_list
{
  char		*line;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

typedef	struct	s_listdata
{
  t_list	*start;
  t_list	*end;
}		t_listdata;

void    delete_link(t_listdata *data, char *delete_link);
void    my_put_in_list(t_listdata *data, char *line);
void    init_listdata(t_listdata *data);
void	free_list(t_listdata *data);
void	show_list(t_listdata *data);

#endif /* !LIST_H_ */
