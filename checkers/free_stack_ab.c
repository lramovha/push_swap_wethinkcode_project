#include "checker.h"

void	free_stack_ab(node_a *ptr_a, node_b *ptr_b)
{
	if (ptr_b->end >= 0)
		free(ptr_b->values);
	if (ptr_a->end >= 0)
		free(ptr_a->values);
}
