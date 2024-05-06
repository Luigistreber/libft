NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

UTILS = ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strlen.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_strlcat.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_bzero.c

		

INCLUDE = libft.h

OBJS = $(UTILS:.c=.o)

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus