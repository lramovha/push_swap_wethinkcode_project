#include "checker.h"

void	reverse_rotate_rrb(node_b *ptr_b)
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
			ptr_b->values[j] = temp_val[i];
			i++;
			j++;
		}
		ptr_b->values[0] = temp_val[i];
        free(temp_val);
	}
}