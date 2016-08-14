/*
** main.c for main.c in /home/lopez_i/.lib/src
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Wed May  4 11:44:42 2016 Loic Lopez
** Last update Sat Jun 11 18:43:22 2016 loic lopez
*/

#include "project.h"

int	main(int ac, char **av)
{
  t_listdata	data;

  (void)ac;
  (void)av;
  init_listdata(&data);
  my_put_in_list(&data, "c'est parti !!!");
  show_list(&data);
  return (0);
}
