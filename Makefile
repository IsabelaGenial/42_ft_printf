NAME			=	libftprintf.a

MANDATORY_HEADER = mandatory/ft_printf.h
MANDATORY_SRC = $(addprefix ./mandatory/, ft_puthex.c ft_putnbr.c ft_putstr.c
ft_printf.c ft_putchar.c ft_putlong.c ft_putptr.c ft_type.c)

BONUS_HEADER = bonus/ft_printf_bonus.h
BONUS_SRC = $(addprefix ./bonus/, ft_flags.c ft_puthex_bonus.c ft_putnbr_bonus.c ft_type_bonus.c ft_printf_bonus.c)


FLAGS			=	-Wextra -Wall -Werror
HADER			=	ft_printf.h
FILES			= $(SRCS_MANDATORY:%.c=%.o) 
T_MAGENTA   =   '\033[0;35M'

all:	$(NAME)

$(NAME): $(FILES)
	@echo $(T_MAGENTA)"creating $(NAME)..." $(T_RESET)

%.o: %.c
	cc $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@

clean:
	rm -rf *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re
