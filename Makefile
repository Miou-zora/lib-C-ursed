##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 		= 	# src/file.c

MAIN		=	src/main.c

TEST_FONC	=	# tests/test_file.c

OBJ_SRC		=	$(SRC:%.c=%.o)
OBJ_MAIN	=	$(MAIN:%.c=%.o)

OBJ_TEST	+=	$(OBJ_SRC)
OBJ_TEST	+=	$(TEST_FONC:%.c=%.o)

CC			=	gcc

TEST_BINARY	=	unit_tests

CFLAGS		=	-Wall -Wextra -Wshadow -I./include

TESTS_FLAGS	=	--coverage -lcriterion -I./include

LFLAGS		=	-L./lib -lmy

NAME		=	temp_name

MK			=	make -s

%.o:	%.c
			@$(CC) $(CFLAGS) -c $< -o $@
			@printf "\033[35m[Compilation]\033[39m %s\n" $<

all:		$(NAME)

$(NAME):	make_lib $(OBJ_SRC) $(OBJ_MAIN)
			@$(CC) $(OBJ_SRC) $(OBJ_MAIN) $(CFLAGS) -o $(NAME) $(LFLAGS)
			@printf "\033[32m[Message]\033[39m Compilation de %s réussi\n" $(NAME)

make_lib:
			@$(MK) -C lib/my/

debug:		CFLAGS += -g
debug:		re

clean:
			@$(RM) $(OBJ_SRC)
			@$(RM) $(OBJ_TEST)
			@$(RM) $(OBJ_MAIN)
			@$(MK) -C lib/my/ clean
			@printf "\033[31m[Message]\033[39m Clean libmy reussi !\n"
			@printf "\033[31m[Message]\033[39m Clean %s reussi !\n" $(NAME)

tests_run:		tclean $(NAME)
			@$(CC) $(SRC) $(TEST_FONC) $(TESTS_FLAGS) $(LFLAGS) -o $(TEST_BINARY)
			./$(TEST_BINARY)
			@printf "\033[32m[Message]\033[39m Compilation de tests réussi !\n"
			@$(mv) *.gc* tests
			gcovr -e tests
			gcovr -e tests -bu
			@$(MK) tclean

tclean:
			@$(RM) tests/*.gcda
			@$(RM) tests/*.gcno
			@$(RM) *.gcda
			@$(RM) *.gcno
			@$(RM) $(TEST_BINARY)
			@printf "\033[31m[Message]\033[39m TClean %s reussi !\n" $(NAME)

fclean:			clean	tclean
			@$(MK) -C lib/my/ fclean
			@printf "\033[31m[Message]\033[39m FClean libmy reussi !\n"
			@$(RM) $(NAME)
			@$(RM) $(TEST_BINARY)
			@$(RM) $(NAME_DEBUG)
			@$(RM) ./lib/libmy.a
			@printf "\033[31m[Message]\033[39m FClean %s reussi !\n" $(NAME)

re:			fclean all

.PHONY:		clean fclean tclean re all tests_run cpy debug make_lib $(NAME)
