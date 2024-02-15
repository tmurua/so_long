NAME = libft.a

#Declared variables
CFILES =	ft_strlen.c		ft_strlcpy.c	ft_strlcat.c	\
			ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	\
			ft_isascii.c	ft_isprint.c	ft_strncmp.c	\
			ft_atoi.c		ft_tolower.c	ft_toupper.c	\
			ft_strchr.c		ft_strrchr.c	ft_strnstr.c	\
			ft_memset.c		ft_memcpy.c		ft_memmove.c	\
			ft_bzero.c		ft_memchr.c		ft_memcmp.c		\
			ft_strdup.c		ft_calloc.c		ft_putchar_fd.c	\
			ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	\
			ft_substr.c		ft_strjoin.c	ft_strtrim.c	\
			ft_strmapi.c	ft_striteri.c	ft_split.c		\
			ft_itoa.c

OBJECTS = $(CFILES:.c=.o)

BONUS_FILES =

BONUS_OBJECTS = $(BONUS_FILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

#Generating the compile files
$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
all: $(NAME)

#Generating object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< $^

bonus: $(BONUS_OBJECTS)
		ar -rcs $(NAME) $(BONUS_OBJECTS)

#Clearing out all the .o files
clean:
	rm -rf $(NAME) $(OBJECTS) $(BONUS_OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: clean all
