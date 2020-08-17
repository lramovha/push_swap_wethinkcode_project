#include "checker.h"

static int		check_instructions(node_a *ptr_a, node_b *ptr_b, char *line)
{
	if ((ft_strcmp(line, "sa") == 0))
		swap_sa(ptr_a);
	else if ((ft_strcmp(line, "sb") == 0))
		swap_sb(ptr_b);
	else if ((ft_strcmp(line, "ss") == 0))
		swap_ss(ptr_a, ptr_b);
	else if ((ft_strcmp(line, "pa") == 0) && ptr_b->end != -1)
		push_pa(ptr_a, ptr_b);
	else if ((ft_strcmp(line, "pb") == 0) && ptr_a->end != -1)
		push_pb(ptr_a, ptr_b);
	else if ((ft_strcmp(line, "ra") == 0))
		rotate_ra(ptr_a);
	else if ((ft_strcmp(line, "rb") == 0))
		rotate_rb(ptr_b);
	else if ((ft_strcmp(line, "rr") == 0))
		rotate_rr(ptr_a, ptr_b);
	else if ((ft_strcmp(line, "rra") == 0))
		reverse_rotate_rra(ptr_a);
	else if ((ft_strcmp(line, "rrb") == 0))
		reverse_rotate_rrb(ptr_b);
	else if ((ft_strcmp(line, "rrr") == 0))
		reverse_rotate_rrr(ptr_a, ptr_b);
	else
		return (0);
	return (1);
}

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

int				evaluate_commands(node_a *ptr_a, node_b *ptr_b)
{
	char	*line; 
	int		fd;

	if (check_duplicate(ptr_a) == 0)
		return (2);
	fd = 0;
	while (get_next_line(fd, &line))
	{
		if ((check_instructions(ptr_a, ptr_b, line) == 0))
			return (2);
		free(line);
	}
	if (check_sorted(ptr_a, ptr_b))
		return (1);
	else
		return (0);
}
