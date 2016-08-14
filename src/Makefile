##
## Makefile for Makefile in /home/lopez_i/.lib
## 
## Made by loic lopez
## Login   <lopez_i@epitech.net>
## 
## Started on  Sat Jun 11 18:27:08 2016 loic lopez
## Last update Sat Jun 11 18:39:40 2016 loic lopez
##

CC	=  gcc

NAME    =  unknown

ECHO	=  /bin/echo -e \

DEFAULT	=  "\033[00m"
GREEN	=  "\033[0;32m"
TEAL	=  "\033[1;36m"
RED	=  "\033[5;31m"

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -pedantic -ansi
CFLAGS += -I./include/
CFLAGS += -I./lib/include/
CFLAGS += -lmy -L./lib/
CFLAGS += -D_BSD_SOURCE
CFLAGS += -D_XOPEN_SOURCE

SRC	=  src/main.c	\

OBJ	= $(SRC:.c=.o)

all: lib_make  $(NAME)

$(NAME):  $(OBJ)
	  @$(CC) -o $(NAME) $(OBJ) $(CFLAGS) && \
	  $(ECHO) $(GREEN) "[OK]" $(TEAL) $(OBJ) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)
lib_make: 
	  @make --no-print-directory -C lib/
lib_clean:
	  @make clean --no-print-directory -C lib/
lib_fclean:
	  @make fclean --no-print-directory -C lib/
lib_re:
	  @make re --no-print-directory -C lib/

clean:	  lib_clean
	  @rm -f $(OBJ) && \
	  $(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(OBJ) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)

fclean:	  clean lib_fclean
	  @rm -f $(NAME) && \
	  $(ECHO) $(GREEN) "[OK] remove" $(TEAL) $(NAME) $(DEFAULT) || \
	  $(ECHO) $(RED) "[ERROR]" $(TEAL) $(OBJ) $(DEFAULT)

re:	  fclean all

.c.o:
	 @$(CC) $(CFLAGS) -c $< -o $@ && \
	 $(ECHO) $(GREEN) "[OK]" $(TEAL) $^ $(DEFAULT) || \
	 $(ECHO) $(RED) "[ERROR]" $(TEAL) $^ $(DEFAULT)

.PHONY:   all clean fclean re
