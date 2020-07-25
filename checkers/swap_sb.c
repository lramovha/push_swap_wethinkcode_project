#include "checker.h"

void	swap_sb(node_b *ptr_b)
{
	int i;
	int j;

	i = 0;
    j = 0;
	if (ptr_b->end >= 1)
	{
	    j = ptr_b->values[i];
		ptr_b->values[i] = ptr_b->values[i + 1];
		ptr_b->values[i + 1] =  j;
	}
}