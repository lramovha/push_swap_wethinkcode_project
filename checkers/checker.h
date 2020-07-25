#ifndef _CHECKER_H_
# define _CHECKER_H_
# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>

typedef struct		stack_a
{
	int				*values;
	int				max_size;
	int				end;
}					node_a;

typedef struct		stack_b
{
	int				*values;
	int				max_size;
	int				end;
}					node_b;

int					check_sorted(node_a *ptr_a, node_b *ptr_b);
int					evaluate_commands(node_a *ptr_a, node_b *ptr_b);
void				stack_ab(node_a *ptr_a, node_b *ptr_b, int );
void				swap_sa(node_a *ptr_a);
void				swap_sb(node_b *ptr_b);
void    			swap_ss(node_a *ptr_a, node_b *ptr_b);
void    			push_pa(node_a *ptr_a, node_b *ptr_b);
void    			push_pb(node_a *ptr_a, node_b *ptr_b);
void				rotate_ra(node_a *ptr_a);
void    			rotate_rb(node_b *ptr_b);
void    			rotate_rr(node_a *ptr_a, node_b *ptr_b);
void				reverse_rotate_rra(node_a *ptr_a);
void				reverse_rotate_rrb(node_b *ptr_b);
void    			reverse_rotate_rrr(node_a *ptr_a, node_b *ptr_b);
void				free_stack_ab(node_a *ptr_a, node_b *ptr_b);

#endif
