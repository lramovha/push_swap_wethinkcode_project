#include "checker.h"

static void		push_down(node_a *ptr_a)
{
	int *temp_val;
    int i;
    int j;

	i = 0;
	j = 1;
	if (ptr_a->end == -1)
		return ;
	else
	{
		temp_val = (int *)malloc(sizeof(int) * ptr_a->max_size);
		while (i <= ptr_a->end)
		{
			temp_val[i] = ptr_a->values[i];
			i++;
		}
		i = 0;
		while (j <= ptr_a->end + 1)
		{
			ptr_a->values[j] = temp_val[i];
			i++;
			j++;
		}
	}
	free(temp_val);
}

static void		push_up(node_b *ptr_b)
{
	int *temp_val;
    int i;
    int j;

	i = 0;
	j = 1;
	if (ptr_b->end == 0)
		return ;
	else
	{
		temp_val = (int *)malloc(sizeof(int) * ptr_b->max_size);
		while (i <= ptr_b->end)
		{
			temp_val[i] = ptr_b->values[i];
			i++;
		}
		i = 0;
		while (j <= ptr_b->end)
		{
			ptr_b->values[i] = temp_val[j];
			i++;
			j++;
		}
	}
	free(temp_val);
}

void    push_pa(node_a *ptr_a, node_b *ptr_b)
{
    if (ptr_a->end == -1)
			ptr_a->values = (int *)malloc(sizeof(int) * ptr_a->max_size);
    if (ptr_b->end != -1)
    {
		push_down(ptr_a);
		ptr_a->values[0] = ptr_b->values[0];
		push_up(ptr_b);
		ptr_a->end++;
		ptr_b->end--;
		if (ptr_b->end == -1)
			free(ptr_b->values);
    }
}