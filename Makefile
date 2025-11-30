INCLUDE := -I.
FLAGS := -Wextra -Werror -Wall
NAME := libft.a
SOURCE := $(wildcard *.c)
OBJECT := $(SOURCE:.c=.o)

all : $(NAME)
$(NAME) : $(OBJECT)
	ar rcs $(NAME) $(OBJECT)
%.o : %.c
	gcc $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f *.a

fclean:clean
	rm -f *.o

re : fclean all

.PHONY: all clean fclean re 