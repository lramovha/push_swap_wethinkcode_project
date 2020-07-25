#include "checker.h"

void    reverse_rotate_rrr(node_a *ptr_a, node_b *ptr_b)
{
    reverse_rotate_rra(ptr_a);
    reverse_rotate_rrb(ptr_b);
}