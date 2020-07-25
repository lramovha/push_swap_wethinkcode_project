#include "checker.h"

void	stack_ab(node_a *ptr_a, node_b *ptr_b, int len)
{
	ptr_a->max_size = len;
	ptr_b->max_size = len;
	ptr_a->end = -1;
	ptr_b->end = -1;
}