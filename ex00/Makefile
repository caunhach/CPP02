SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Fixed.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = orthodox

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re