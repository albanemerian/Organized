##
## EPITECH PROJECT, 2023
## my_organize
## File description:
## my_organize
##

CC	=	gcc

NAME	=	organized

UNIT_TEST	= test

CFLAGS	=	-Wshadow -Werror -Wall -I./include

CRITFLAG	=	tests/test_lib.c tests/test_orga.c --coverage -lcriterion

LIBS	=	-L./ -lmy -L./libshell/ -lshell

TEST_LIBS	=	-L./ -lmy

SRC		=   main.c	\
			add.c	\
			dell.c	\
			disp.c	\
			sort.c	\
			sort_name.c	\
			sort_type.c	\
			reverse_sort.c	\
			sort_check.c

SRCTEST	=	add.c	\
			dell.c	\
			disp.c	\
			sort.c	\
			sort_name.c	\
			sort_type.c	\
			reverse_sort.c	\
			sort_check.c

OBJ		=	$(SRC:.c=.o)

all:	libmy $(NAME)

$(NAME):	$(OBJ)
			@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)
			@echo -e "\e[1;32m{ Makefile is ready }\e[00;37m"
			@echo -e "\e[1;36m{ Binary is ready }\e[00;37m"

$(UNIT_TEST): libmy
			$(CC) -o $(UNIT_TEST) $(SRCTEST) $(CRITFLAG) $(TEST_LIBS)

tests_run:	$(UNIT_TEST)
			@./$(UNIT_TEST)
			@gcovr --exclude tests/

.PHONY: libmy

libmy:
	$(MAKE) -C lib/my

clean:
			$(MAKE) -C lib/my clean
			@rm -f $(OBJ)
			@rm -f *.gc*
			@rm -f coding-style-reports.log
			@rm -f *~
			@rm -f *.gcda
			@rm -f *.gcno

fclean:	clean
			$(MAKE) -C lib/my fclean
			@rm -f $(NAME)
			@rm -f $(UNIT_TEST)
			@echo -e "\e[1;33m{ REPOSITORIE as been cleaned }\e[00;37m"


re:	fclean all
