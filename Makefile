NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = 	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c \
		ft_strlen.c		ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c \
		ft_strlcpy.c	ft_strlcat.c	ft_toupper.c	ft_tolower.c	ft_strchr.c \
		ft_strrchr.c	ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c \
		ft_atoi.c 		ft_calloc.c 	ft_strdup.c

BONUS =	ft_lstnew.c	ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c /
		ft_lstadd_back.c	ft_lstdelone.c	ft_lstclear.c	ft_lstiter.c /
		ft_lstmap.c

OBJ_SRC = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ_SRC)
	ar rcs $@ $(OBJ_SRC)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(NAME)

$(NAME) : $(OBJ_SRC) $(OBJ_BONUS)
	ar rcs $@ $(OBJ_SRC) $(OBJ_BONUS)

clean:
	rm -rf $(OBJ_SRC) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
