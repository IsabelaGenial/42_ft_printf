NAME				=	libftprintf.a

MANDATORY_HEADER	= $(addprefix ./mandatory/, ft_printf.h)
MANDATORY_SRC		= $(addprefix ./mandatory/, ft_puthex.c ft_putnbr.c ft_type.c)
COMMON_SRC 			= $(addprefix ./geral/, ft_printf.c  ft_putchar.c \
								 ft_putlong.c  ft_putptr.c  ft_putstr.c)
BONUS_HEADER 		= $(addprefix ./bonus/, ft_printf_bonus.h)
BONUS_SRC 			= $(addprefix ./bonus/, ft_flags.c ft_puthex_bonus.c  \
										ft_putnbr_bonus.c ft_type_bonus.c)
MANDATORY_FILES		= $(MANDATORY_SRC:%.c=%.o) 
BONUS_FILES			= $(BONUS_SRC:%.c=%.o)
COMMON_FILES		= $(COMMON_SRC:%.c=%.o)
FLAGS				=	-Wextra -Wall -Werror

CHECK_M				= $(shell ar -t libftprintf.a $(MANDATORY_SRC:.c=.o) 2>&1)
CHECK_B				= $(shell ar -t libftprintf.a $(BONUS_SRC:.c=.o) 2>&1)

%.o: %.c
	cc $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@ 

ifeq ($(CHECK_B) , $(BONUS_FILES))
all:
else
all: $(NAME)
endif

$(NAME): $(MANDATORY_FILES) $(COMMON_FILES)
	
clean:
	rm -rf $(MANDATORY_FILES) $(BONUS_FILES) $(COMMON_FILES)

fclean: clean
	rm -rf $(NAME) 

re: fclean
	$(MAKE)


ifeq ($(CHECK_M) , $(MANDATORY_FILES))
bonus: fclean $(BONUS_FILES) $(COMMON_FILES)
else
bonus: $(BONUS_FILES) $(COMMON_FILES)
endif

.PHONY: all clean fclean re
