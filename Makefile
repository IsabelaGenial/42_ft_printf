NAME			=	libftprintf.a
SRCS_MANDATORY	=	ft_printf.c 
SRCS_BONUS		=
FLAGS			= -Wextra -Wall -Werror
HADER			= 

all: 


clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
