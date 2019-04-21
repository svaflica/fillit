# name of our program's binary
NAME = fillit

# directory where source files lie
SRCS_DIR = srcs

# directory where header file lies
HEADER = inc/header.h

# files for which we will do object files
SRCS = $(SRCS_DIR)/ft_arrncpy.c $(SRCS_DIR)/ft_backtr.c $(SRCS_DIR)/ft_check_nl.c \
$(SRCS_DIR)/ft_error_msg.c $(SRCS_DIR)/ft_find_coordinate.c $(SRCS_DIR)/ft_is_map_valid.c \
$(SRCS_DIR)/ft_is_tetramino_valid.c $(SRCS_DIR)/ft_list_del.c $(SRCS_DIR)/ft_list_delone.c \
$(SRCS_DIR)/ft_list_new.c $(SRCS_DIR)/ft_list_pushback.c $(SRCS_DIR)/ft_list_size.c \
$(SRCS_DIR)/ft_map_create.c $(SRCS_DIR)/ft_map_reader.c \
$(SRCS_DIR)/ft_print_map.c $(SRCS_DIR)/ft_solver.c $(SRCS_DIR)/ft_usage_file.c $(SRCS_DIR)/main.c

# files which will be compiled in the binary file
OBJS = ft_arrncpy.o ft_backtr.o ft_check_nl.o ft_error_msg.o ft_find_coordinate.o ft_is_map_valid.o \
ft_is_tetramino_valid.o ft_list_del.o ft_list_delone.o ft_list_new.o ft_list_pushback.o ft_list_size.o \
ft_map_create.o ft_map_reader.o ft_print_map.o ft_solver.o ft_usage_file.o main.o

# flags for compilation
CC = gcc
FLAGS = -Wall -Wextra -Werror

# it will compile
all: $(NAME)

$(NAME) : $(OBJS)
	@make -C ./libft
	@$(CC) -o $(NAME) $(OBJS) libft/libft.a

%.o: srcs/%.c $(HEADER)
	@$(CC) -g $(FLAGS) -c $<

clean :
	@make clean -C ./libft
	@rm -f $(OBJS)

fclean : clean
	@make fclean -C ./libft
	@rm -f $(NAME)

re : fclean all
