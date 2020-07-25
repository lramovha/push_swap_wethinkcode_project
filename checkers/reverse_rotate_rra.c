#include "checker.h"

void	reverse_rotate_rra(node_a *ptr_a)
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
			ptr_a->values[j] = temp_val[i];
			i++;
			j++;
		}
		ptr_a->values[0] = temp_val[i];
        free(temp_val);
	}
}