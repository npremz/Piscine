/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:38:02 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 11:46:40 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*
t_list *ft_create_elem(void *data)
{
	t_list	*elem;

	elem = NULL;
	elem = (t_list *)malloc(sizeof(t_list));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}*/

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	node = ft_create_elem(data);
	if (node == NULL)
		return ;
	node->next = *begin_list;
	*begin_list = node;
}
