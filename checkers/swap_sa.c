#include "checker.h"

void	swap_sa(node_a *ptr_a)
{
	int i;
	int j;

	i = 0;
    j = 0;
	if (ptr_a->end >= 1)
	{
	    j = ptr_a->values[i];
		ptr_a->values[i] = ptr_a->values[i + 1];
		ptr_a->values[i + 1] =  j;
	}
}