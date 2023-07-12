NAME				=	libftprintf.a
## BONUS				=	libftprintf_bonus.a

MANDATORY_HEADER	= $(addprefix ./mandatory/, ft_printf.h)
MANDATORY_SRC		= $(addprefix ./mandatory/, ft_puthex.c ft_putnbr.c ft_type.c)
MANDATORY_SRC 		+= $(addprefix ./geral/, ft_printf.c  ft_putchar.c  ft_putlong.c  ft_putptr.c  ft_putstr.c)

BONUS_HEADER 		= $(addprefix ./bonus/, ft_printf_bonus.h)
BONUS_SRC 			= $(addprefix ./bonus/, ft_flags.c ft_puthex_bonus.c ft_putnbr_bonus.c ft_type_bonus.c)
BONUS_SRC 			+= $(addprefix ./geral/, ft_printf.c  ft_putchar.c  ft_putlong.c  ft_putptr.c  ft_putstr.c)
FLAGS				=	-Wextra -Wall -Werror
MANDATORY_FILES		= $(MANDATORY_SRC:%.c=%.o) 
BONUS_FILES			= $(BONUS_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(MANDATORY_FILES)
	
%.o: %.c
	cc $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@ 

bonus: $(BONUS_FILES)
	cc $(FLAGS) -c $(BONUS_SRC) -o $(BONUS_FILES)
	ar -rcs $(NAME) $@

##bonus: $(NAME) $(BONUS)

## $(BONUS): $(BONUS_FILES)
##	ar -rcs $(BONUS) $@

clean:
	rm -rf $(MANDATORY_FILES)

fclean: clean
	echo aqui
	rm -rf $(NAME) $(BONUS)

re: fclean all

.PHONY: all clean fclean re
