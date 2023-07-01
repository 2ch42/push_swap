#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"

static void	three_sort(t_stack *a)
{
	if (a->bottom->offset == 1 && a->bottom->next->offset == 3)
	{
		write(1, "rra\n", 4);
		rev_rotate(a);
	}
	else if (a->bottom->offset == 2 && a->bottom->next->offset == 1)
	{
		write(1, "ra\n", 3);
		rotate(a);
	}
	else if (a->bottom->offset == 3 && a->bottom->next->offset == 1)
	{
		write(1, "sa\n", 3);
		swap(a);
	}
	else if ((a->bottom->offset == 2 && a->bottom->next->offset == 3)
		|| (a->bottom->offset == 1 && a->bottom->next->offset == 2))
	{
		write(1, "rra\n", 4);
		rev_rotate(a);
		three_sort(a);
	}
}

static void	five_sort(t_stack *a, t_stack *b)
{
	
}

int	special_sort(t_stack *a, t_stack *b)
{
	if (a->size == 3)
	{
		three_sort(a);
		return (1);
	}
	if (a->size == 5)
	{
		five_sort(a, b);
		return (1);
	}
	return (-1);
}
