NAME = libft.a

SRC = ./srcs/ft_bzero.c \
		./srcs/ft_isalnum.c \
		./srcs/ft_isalpha.c \
		./srcs/ft_isascii.c \
		./srcs/ft_isdigit.c \
		./srcs/ft_isprint.c \
		./srcs/ft_memcpy.c \
		./srcs/ft_memcmp.c \
		./srcs/ft_memchr.c \
		./srcs/ft_memset.c \
		./srcs/ft_memmove.c \
		./srcs/ft_strlen.c \
		./srcs/ft_strlcat.c \
		./srcs/ft_strlcpy.c \
		./srcs/ft_toupper.c \
		./srcs/ft_tolower.c \
		./srcs/ft_strchr.c \
		./srcs/ft_strrchr.c \
		./srcs/ft_strncmp.c \
		./srcs/ft_strchr.c \
		./srcs/ft_strncmp.c \
		./srcs/ft_strnstr.c \
		./srcs/ft_atoi.c \
		./srcs/ft_calloc.c \
		./srcs/ft_strdup.c \
		./srcs/ft_substr.c \
		./srcs/ft_strjoin.c \
		./srcs/ft_strtrim.c \
		./srcs/ft_split.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror  

ARC = ar rc

LIBRAN = ranlib

CC = gcc

INCLUDE = ./includes

.c.o:
		$(CC) $(FLAGS) -c $< -o ${<:.c=.o} -I $(INCLUDE)

$(NAME): ${OBJ}
		$(ARC) $(NAME) $(OBJ)
		$(LIBRAN) $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY : all clean fclean re so
