##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC			=	$(wildcard fonctions/*.c)

TEST_FONC	=	$(wildcard tests/*.c)


TEST_OBJ	=	$(TEST_FONC:%.c=%.o)

TESTS_FLAGS	=	--coverage -lcriterion -I./include

OBJ		=	$(SRC:%.c=%.o)

NAME	=	libmy.a

RM			=	rm -rf

TEST_BINARY	=	unit_tests

MV		=	mv

CFLAGS	= 	-Wall -Wextra -Wshadow

MK			=	make -s

AC		=	ar rc

CP		=	cp -rf

%.o:	%.c
		@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)
		@$(MV) $(NAME) ../
		@mkdir -p ../../include
		@$(CP) include/my.h ../../include/my.h

tclean:
		@$(RM) **/*.gcda
		@$(RM) **/*.gcno
		@$(RM) $(TEST_BINARY)

tests_run:		tclean $(TEST_OBJ)
		@$(CC) $(SRC) $(TEST_OBJ) $(TESTS_FLAGS) $(LFLAGS) -o $(TEST_BINARY)
		./$(TEST_BINARY)
		# ./$(TEST_BINARY) --xml=tests/coverage.xml
		@printf "\033[32m[Message]\033[39m Compilation de tests réussi !\n"
		mv *.gcno fonctions
		mv *.gcda fonctions
		gcovr -e tests
		gcovr -e tests -bu

$(NAME):	$(OBJ)
		@$(AC) $(NAME) $(OBJ)
		@printf "\033[32m[Message]\033[39m Compilation de libmy réussi !\n"

clean:
		@$(RM) $(OBJ)
		@$(RM) $(TEST_OBJ)
		@$(RM) ../../$(NAME)

fclean: 	clean
		@$(RM) ../../include/my.h

re:	fclean all

.PHONY: fclean clean re all
