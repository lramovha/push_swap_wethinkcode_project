#include "push_swap.h"

static int		check_duplicate(node_a *ptr_a)
{
	int i;
	int j;

	j = 0;
	while (j < ptr_a->max_size)
	{
		i = 0;
		while (i < ptr_a->max_size)
		{
			if (ptr_a->values[j] == ptr_a->values[i] && i != j)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

static int		find_minimum(node_a *ptr_a)
{
	int new_min;
	int minimum;
    int i;

	minimum = ptr_a->values[0];
	i = 1;
	new_min = 0;
	while (i <= ptr_a->end)
	{
		if (ptr_a->values[i] < minimum)
		{
			minimum = ptr_a->values[i];
			new_min = i;
		}
		i++;
	}
	return (new_min);
}

void			push_back_pa(node_a *ptr_a, node_b *ptr_b)
{
	while (ptr_b->end >= 0)
	{
		ft_putendl("pa");
		push_pa(ptr_a, ptr_b);
	}
}

int				evaluate_sort_command(node_a *ptr_a, node_b *ptr_b)
{
	int min_i;
	int minimum;

	if (check_duplicate(ptr_a) == 0)
		return (2);
	if (check_sorted_stack_a(ptr_a) == 0)
	{
		while (check_sorted_stack_a(ptr_a) == 0)
		{
			min_i = find_minimum(ptr_a);
			minimum = ptr_a->values[min_i];
			if (min_i > (ptr_a->max_size / 2))
				sort_left_partition(ptr_a, minimum);
			else
				sort_right_partition(ptr_a, ptr_b, minimum);
		}
		push_back_pa(ptr_a, ptr_b);
	}
	return (1);
}