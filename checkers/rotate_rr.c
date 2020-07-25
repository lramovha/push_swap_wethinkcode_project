#include "checker.h"

void    rotate_rr(node_a *ptr_a, node_b *ptr_b)
{
    rotate_ra(ptr_a);
    rotate_rb(ptr_b);
}