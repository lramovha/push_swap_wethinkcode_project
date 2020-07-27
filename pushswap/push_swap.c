#include "push_swap.h"

static void		free_memory(char **s)
{
	int i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s[i]);
	free(s);
}

static int		compare_elements(int i, char *s)
{
	char *temp_val;

	temp_val = NULL;
	temp_val = ft_itoa(i);
	if (ft_strcmp(temp_val, s) != 0)
	{
		free(temp_val);
		return (1);
	}
	free(temp_val);
	return (0);
}

static int		return_size(int argc, char **argv)
{
	int		size;
	int		i;
	int		j;
	int		k;
	char	**s;

	size = 0;
	k = 0;
	i = 1;
	while (i < argc)
	{
		s = ft_strsplit(argv[i], ' ');
		j = 0;
		while (s[j])
		{
			k = ft_atoi(s[j]);
			if (compare_elements(k, s[j]))
				return (0);
			j++;
			size++;
		}
		free_memory(s);
		i++;
	}
	return (size);
}

static int		assign_array_values(int argc, char **argv, node_a *ptr_a)
{
	int		i;
	int		j;
	int		k;
    char	**s;

	k = 0;
	i = 1;
	ptr_a->values = (int *)ft_memalloc(sizeof(int) * ptr_a->max_size);
	while (i < argc)
	{
		s = ft_strsplit(argv[i], ' ');
		j = 0;
		while (s[j])
		{
			ptr_a->values[k] = ft_atoi(s[j]);
			if (compare_elements(ptr_a->values[k], s[j]))
				return (0);
			k++;
			j++;
		}
		free_memory(s);
		i++;
	}
	return (1);
}

int				main(int argc, char **argv)
{
	int     size;
	int    	i;
    node_a  ptr_a;
	node_b  ptr_b;

	i = 0;
	if ((size = return_size(argc, argv)))
	{
		stack_ab(&ptr_a, &ptr_b, size);
		if (assign_array_values(argc, argv, &ptr_a))
		{
			ptr_a.end = ptr_a.max_size - 1;
			i = evaluate_sort_command(&ptr_a, &ptr_b);
		}
		else
			i = 2;
		if (i == 2)
			write(2, "Error\n", 6);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}