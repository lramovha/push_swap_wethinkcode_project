#ifndef __PUSH_SWAP__
# define __PUSH_SWAP__
#include "../checkers/checker.h"

int             check_sorted_stack_a(node_a *ptr_a);
void	        sort_left_partition(node_a *ptr_a, int minimum);
void	        sort_right_partition(node_a *ptr_a, node_b *ptr_b, int minimum);
int				evaluate_sort_command(node_a *ptr_a, node_b *ptr_b);

#endif