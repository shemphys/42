NAME = libft.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf

SRC = ft_atoi.c\
			ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c\
			ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
			ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
			ft_strrchr.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
			ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
			ft_putnbr_fd.c\

BONUS = ft_lstnew_bonus.c\

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_B:.c=.o)



all: $(NAME)#aquí podría poner libft.a y quitar la variable NAME

$(NAME): $(OBJS)
	@ar crs $(NAME) $(OBJS)

clean:#solo borra los .o
	@$(RM) $(OBJS)

fclean: clean#borra todo, incluido el libft.a
	@rm -f $(NAME)

re: fclean all

bonus:
		@make SRC='$(SRC) $(BONUS)'

re: fclean bonus

rebonus: fclean bonus

.PHONY: all re clean fclean bonus