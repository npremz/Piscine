/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:16:20 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 16:02:07 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

// t_list *ft_create_elem(void *data)
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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	if (node == NULL)
		return ;
	node->next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin_list;

	i = 0;
	begin_list = 0;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
}
/*
#include <stdio.h>

int	main(void)
{
	char *chars[] = {"BARK", "WOUF", "ARRRRW"};
	int i;
	t_list *head;

	i = 0;
	head = ft_list_push_strs(3, chars);
	while (head)
	{
		printf("%s\n", (char *)(*head).data);
		head = head->next;
	}
	return (0);
}*/