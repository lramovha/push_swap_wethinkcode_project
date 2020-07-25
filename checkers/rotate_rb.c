#include "checker.h"

void    rotate_rb(node_b *ptr_b)
{
	int *temp_val;
    int i;
	int j;

	i = 0;
	j = 1;
	temp_val = (int *)malloc(sizeof(int) * ptr_b->max_size);
	if (ptr_b->end >= 1)
	{
		while (i <= ptr_b->end)
		{
			temp_val[i] = ptr_b->values[i];
			i++;
		}
		i = 0;
		while (i <= ptr_b->end)
		{
			ptr_b->values[i] = temp_val[j];
			i++;
			j++;
		}
		ptr_b->values[ptr_b->end] = temp_val[0];
	}
	free(temp_val);
}