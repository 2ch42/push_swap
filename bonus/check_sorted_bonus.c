#include <stdlib.h>
#include "push_swap.h"

int	check_sorted(t_stack *st)
{
	t_list	*p;
	int	n;

	p = st->bottom;
	n = st->size;
	while (p != NULL)
	{
		if (n != p->offset)
			return (-1);
		p = p->next;
		n--;
	}
	return (1);
}
