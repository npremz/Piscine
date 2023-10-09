/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:03:03 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 11:47:27 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*elem;

// 	elem = NULL;
// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (elem)
// 	{
// 		elem->data = data;
// 		elem->next = NULL;
// 	}
// 	return (elem);
// }

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_elem;

	if (*begin_list)
	{
		last_elem = ft_list_last(*begin_list);
		last_elem->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int a = 10;
	int b = 100;
	int c = 1000;
	void *pa = &a;
	void *pb = &b;
	void *pc = &c;
	t_list *elem = ft_create_elem(pc);

	ft_list_push_back(&elem, pb);
	printf("%d\n", *(int *)(*elem->next).data);
}*/