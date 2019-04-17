# name of our program's binary
NAME = fillit

# directory where source files lie
SRCS_DIR = srcs/

# directory where header file lies
INC_DIR = inc/

# files for which we will do object files
SRCS =

# files which will be compiled in the binary file
OBJS =

# flags for compilation
CC = gcc
FLAGS = -Wall -Wextra -Werror

# it will compile 
all: $(NAME)

$(NAME) : $(OBJS)
	gcc -o $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	gcc -Wall -Wextra -Werror $(SRCS) -o $@ -c $<

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
