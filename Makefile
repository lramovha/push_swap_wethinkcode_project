CC = gcc

LIB = ./libft/libft.a

NAME = checker

NAME1 = push_swap

FLAGS = -Wall -Wextra -Werror -I.

SRCC =	./checkers/checker.c ./checkers/evaluate_commands.c\
		./checkers/check_sorted.c ./checkers/free_stack_ab.c\
		./checkers/push_pa.c ./checkers/push_pb.c ./checkers/reverse_rotate_rra.c\
		./checkers/reverse_rotate_rrb.c ./checkers/reverse_rotate_rrr.c\
		./checkers/rotate_ra.c ./checkers/rotate_rb.c ./checkers/rotate_rr.c\
		./checkers/stack_ab.c ./checkers/swap_sa.c ./checkers/swap_sb.c\
		./checkers/swap_ss.c

SRCS = ./checkers/stack_ab.c ./checkers/push_pa.c ./checkers/push_pb.c\
		./checkers/rotate_ra.c ./checkers/rotate_rb.c ./checkers/rotate_rr.c\
		./checkers/reverse_rotate_rra.c ./checkers/reverse_rotate_rrb.c\
		./checkers/reverse_rotate_rrr.c ./checkers/swap_sa.c ./checkers/swap_sb.c\
		./checkers/swap_ss.c ./checkers/free_stack_ab.c ./pushswap/check_sorted_stack_a.c\
		./pushswap/evaluate_sort_command.c ./pushswap/push_swap.c\
		./pushswap/sort_left_partition.c ./pushswap/sort_right_partition.c

all: $(NAME) $(NAME1)

$(NAME):

		make -C ./libft
		$(CC) $(FLAGS) -o $(NAME) $(SRCC) $(LIB)

$(NAME1):
		$(CC) $(FLAGS) -o $(NAME1) $(SRCS) $(LIB)

clean:
		rm -fr $(SRCO)
		make clean -C ./libft
fclean: clean
		rm -fr $(NAME)
		rm -fr $(NAME1)
		make fclean -C ./libft

re: fclean all