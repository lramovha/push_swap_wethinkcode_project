#include "push_swap.h"

void	sort_left_partition(node_a *ptr_a, int minimum)
{
	while (ptr_a->values[0] != minimum)
	{
		if (ptr_a->values[0] > ptr_a->values[1]\
				&& minimum != ptr_a->values[ptr_a->end])
		{
			ft_putendl("sa");
			swap_sa(ptr_a);
		}
		ft_putendl("rra");
		reverse_rotate_rra(ptr_a);
	}
}