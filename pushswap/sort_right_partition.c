#include "push_swap.h"

void	sort_right_partition(node_a *ptr_a, node_b *ptr_b, int minimum)
{
	if (ptr_a->max_size > 1)
	{
		if (ptr_a->values[0] == minimum && ptr_a->end > 2)
		{
			ft_putendl("pb");
			push_pb(ptr_a, ptr_b);
			return ;
		}
		while (ptr_a->values[1] != minimum && ptr_a->values[0] != minimum)
		{
			ft_putendl("ra");
			rotate_ra(ptr_a);
		}
		if (ptr_a->values[0] > ptr_a->values[ptr_a->end])
		{
			ft_putendl("ra");
			rotate_ra(ptr_a);
		}
		else if (!check_sorted_stack_a(ptr_a))
		{
			ft_putendl("sa");
			swap_sa(ptr_a);
		}
	}
}