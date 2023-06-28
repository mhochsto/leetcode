NAME := test_program

CFLAGS := -Wall -Wextra -Werror

CC := cc -g

SRC := 	main.c					\
		removeDuplicates.c		\
		isPalindrome.c			\
		isAnagram.c


OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(CC) -I. -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY:
	 clean fclean re