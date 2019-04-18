# name of our program's binary
NAME = fillit

# directory where source files lie
SRCS_DIR = srcs/

# directory where header file lies
INC_DIR = inc/

# files for which we will do object files
SRCS = *.c

# files which will be compiled in the binary file
OBJS = *.o

# flags for compilation
CC = gcc
FLAGS = -Wall -Wextra -Werror

# it will compile
all: $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -c srcs/*.c *.c
	gcc -o $(NAME) *.o libft/libft.a
#$(NAME) : $(OBJS)
#	gcc -o $(NAME) $(OBJS)

#$(OBJS) : $(SRCS)
#	gcc -Wall -Wextra -Werror $(SRCS) -o $@ -c $<

clean :
	rm -f $(OBJS)
	libft/Makefile clean

fclean : clean
	rm -f $(NAME) libft/libft.a

re : fclean all
