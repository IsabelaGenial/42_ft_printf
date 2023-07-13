NAME				=	libftprintf.a

MANDATORY_HEADER	= $(addprefix ./mandatory/, ft_printf.h)
MANDATORY_SRC		= $(addprefix ./mandatory/, ft_puthex.c ft_putnbr.c \
						ft_type.c	ft_printf.c	ft_putchar.c	ft_putlong.c \
						ft_putptr.c	ft_putstr.c)
MANDATORY_FILES		= $(MANDATORY_SRC:%.c=%.o) 
FLAGS				=	-g3 -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(MANDATORY_FILES)

%.o: %.c
	cc $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@ 
	
clean:
	rm -rf $(MANDATORY_FILES) $(COMMON_FILES)

fclean: clean
	rm -rf $(NAME) 

re: fclean all

.PHONY: all clean fclean re
