t_stack* init_stack()
{
	t_stack	*s;
	s->top = NULL;
	s->bottom = NULL;
	return (s);
}

void	pop_push_one(t_stack *st_from, t_stack *st_to)
{
	st_to->top->next = st_from->top;
	st_to->top = st_from->top;
	st_from->top = NULL;
	st_from->next = NULL;
}

void	pop_push(t_stack *st_from, t_stack *st_to)
{
	t_list	*temp;

	temp = st_from->bottom;
	if (temp == NULL)
		return ;
	if (temp == st_from->top)
	{
		pop_push_one(st_from, to);
		return ;
	}
	while (temp->next != st_from->top)
	{
		if (st_to->bottom == NULL)
		{
			pop_push_null(st_from, st_to, temp);
			return;
		}
		st_to->top->next = temp->next;
		st_to->top = temp->next;
		from->top = temp;
	}
}

//지금은 보내는쪽이 하나만 있는경우랑 null인 경우함. 받는쪽이 null인 경우도 넣어야함.
