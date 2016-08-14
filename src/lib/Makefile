##
## Makefile<test> for Makefile in /home/lopez_i/traitements/PSU_2015_minishell1
## 
## Made by Loic Lopez
## Login   <lopez_i@epitech.net>
## 
## Started on  Thu Jan 21 19:22:39 2016 Loic Lopez
## Last update Sat Jun 11 19:03:04 2016 loic lopez
##

CC	=	gcc

NAME    =  	libmy.a

ARRC	=  	ar rc

ECHO	=  	/bin/echo -e \

DEFAULT	=  	"\033[00m"
GREEN	=  	"\033[0;32m"
TEAL	=  	"\033[1;36m"
RED	=  	"\033[5;31m"

CFLAGS  +=      -D_BSD_SOURCE -D_XOPEN_SOURCE
CFLAGS += 	-Wextra -Wall -Werror
CFLAGS += 	-pedantic -ansi
CFLAGS += 	-I./include/

SRC	=  	printf/my_printf_p.c		\
	   	printf/my_printf.c		\
	   	printf/my_put_nbr_unsigned.c	\
	   	printf/my_putstr.c		\
	   	printf/my_putchar.c		\
	   	printf/my_putnbr_base.c		\
		printf/my_putstr_noprintable.c	\
		printf/my_putnbr_base_size.c	\
		printf/my_perror.c		\
	   	printf/my_put_nbr.c		\
		utils/my_strlen.c		\
		utils/my_strcpy.c		\
		utils/my_strdup.c		\
		utils/my_getnbr.c		\
		utils/my_str_to_wordtab.c	\
		utils/my_strcmp.c		\
		utils/my_strncmp.c		\
		utils/get_next_line.c		\
		utils/my_str_is_num.c		\
		utils/xmalloc.c			\
		utils/epur_str.c		\
		list/my_put_in_list.c		\
		list/show_list.c		\
		list/delete_link.c		\
		list/free_list.c		\
		list/init_listdata.c		\

OBJ	= 	$(SRC:.c=.o)

all:	  	$(NAME)

$(NAME):  	$(OBJ)
	  	@$(ARRC) $(NAME) $(OBJ) && \
	  	$(ECHO) $(GREEN) "[AR]" $(TEAL) $(NAME) $(DEFAULT) || \
	  	$(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)
	  	@ranlib $(NAME) && \
	  	$(ECHO) $(GREEN) "[OK]" $(TEAL) $(NAME) $(DEFAULT) || \
	  	$(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)

clean:
	  	@rm -f $(OBJ) && \
	  	$(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(OBJ) $(DEFAULT) || \
	  	$(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)

fclean:	  	clean
	  	@rm -f $(NAME) && \
	  	$(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(NAME) $(DEFAULT) || \
	  	$(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)

re:		fclean all

.c.o:
		@$(CC) $(CFLAGS) -c $< -o $@ && \
		$(ECHO) $(GREEN) "[OK]" $(TEAL) $^ $(DEFAULT) || \
		$(ECHO) $(RED) "[ERROR]" $(TEAL) $^ $(DEFAULT)

.PHONY:   	all clean fclean re
