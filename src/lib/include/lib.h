/*
** lib.h for lib.h in /home/lopez_i/.lib
**
** Made by Loic Lopez
** Login   <lopez_i@epitech.net>
**
** Started on  Wed May  4 11:28:02 2016 Loic Lopez
** Last update Sat Jun 11 19:05:36 2016 loic lopez
*/

#ifndef LIB_H_
# define LIB_H_

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "get_next_line.h"
#include "my_printf.h"
#include "list.h"

void	*xmalloc(size_t	size);
char	*my_strdup(char *str);
int	my_getnbr(char *str);
char	*delete_specific_char(char *str, char c);
char	*epur_str(char *line);
char	**my_str_to_wordtab(char *str, char c);
char	**create_tab_and_epur(char *line, char c);
void	my_cperror(char c);
void	my_perror(char *str);
int	my_str_is_num(char *str);
int	my_strncmp(char *str, char *str2, int nb);

#endif /* !LIB_ */
