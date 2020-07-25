#include "checker.h"

void	rotate_ra(node_a *ptr_a)
{
	int *temp_val;
    int i;
	int j;

	i = 0;
	j = 1;
	temp_val = (int *)malloc(sizeof(int) * ptr_a->max_size);
	if (ptr_a->end >= 1)
	{
		while (i <= ptr_a->end)
		{
			temp_val[i] = ptr_a->values[i];
			i++;
		}
		i = 0;
		while (i <= ptr_a->end)
		{
			ptr_a->values[i] = temp_val[j];
			i++;
			j++;
		}
		ptr_a->values[ptr_a->end] = temp_val[0];
	}
	free(temp_val);
}