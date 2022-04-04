##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC		=	fonctions/my_compute_power_rec.c		\
			fonctions/my_compute_square_root.c		\
			fonctions/my_find_prime_sup.c			\
			fonctions/my_getnbr.c					\
			fonctions/my_isneg.c					\
			fonctions/my_is_prime.c					\
			fonctions/my_putchar.c					\
			fonctions/my_put_nbr.c					\
			fonctions/my_putstr.c					\
			fonctions/my_revstr.c					\
			fonctions/my_showmem.c					\
			fonctions/my_showstr.c					\
			fonctions/my_sort_int_array.c			\
			fonctions/my_strcat.c					\
			fonctions/my_strcmp.c					\
			fonctions/my_strcpy.c					\
			fonctions/my_str_isalpha.c				\
			fonctions/my_str_islower.c				\
			fonctions/my_str_isnum.c				\
			fonctions/my_str_isprintable.c			\
			fonctions/my_str_isupper.c				\
			fonctions/my_strlen.c					\
			fonctions/my_strlowcase.c				\
			fonctions/my_strncat.c					\
			fonctions/my_strncmp.c					\
			fonctions/my_strncpy.c					\
			fonctions/my_strstr.c					\
			fonctions/my_strupcase.c				\
			fonctions/my_swap.c						\
			fonctions/my_strcapitalize.c			\
			fonctions/my_max.c						\
			fonctions/my_min.c						\
			fonctions/my_abs.c						\
			fonctions/my_str_isan.c					\
			fonctions/my_str_without_space.c		\
			fonctions/my_strdup.c					\
			fonctions/my_str_without_char_array.c	\
			fonctions/my_calloc.c					\
			fonctions/my_memset.c 					\
			fonctions/get_nbrlen.c					\
			fonctions/my_printf.c					\
			fonctions/myf_putbase.c					\
			fonctions/my_convert_base.c				\
			fonctions/my_fputthat.c					\
			fonctions/data_to_array_str.c			\
			fonctions/get_len_array.c

OBJ		=	$(SRC:%.c=%.o)

NAME	=	libmy.a

MV		=	mv

CFLAGS	= 	-Wall -Wextra -Wshadow

AC		=	ar rc

CP		=	cp -rf

%.o:	%.c
		@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)
		@$(MV) $(NAME) ../
		@mkdir -p ../../include
		@$(CP) include/my.h ../../include/my.h

$(NAME):	$(OBJ)
		@$(AC) $(NAME) $(OBJ)
		@printf "\033[32m[Message]\033[39m Compilation de libmy réussi !\n"

clean:
		@$(RM) $(OBJ)
		@$(RM) ../../$(NAME)

fclean: 	clean
		@$(RM) ../../include/my.h

re:	fclean all

.PHONY: fclean clean re all
