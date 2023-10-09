/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:54:04 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 11:48:46 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void 
*data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			(*f)(list_ptr->data);
		}
		list_ptr = list_ptr->next;
	}
}

// #include <stdio.h>

// t_list *ft_create_elem(void *data)
// {
// 	t_list* new_node;

// 	new_node = (t_list*)malloc(sizeof(t_list));
// 	if(new_node)
// 	{
// 		new_node->data = data;
// 		new_node->next = NULL;
// 	}
// 	return (new_node);
// }

// void display(t_list *head)
// {
// 	while(head != NULL)
// 	{
// 		printf("%d ",*(int *)head->data);
// 		head = head->next;
// 	}
// }

// void	ft_add(void *data)
// {
// 	*(int *)data = *(int *)data + *(int *)data;
// }

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && *(s1 + i) == *(s2 + i))
// 	{
// 		i++;
// 	}
// 	return (*(s1 + i) - *(s2 + i));
// }

// int main()
// {
// 	int a = 10, b = 20, c = 30, x= 40, z = 50, l = 60, o = 40;
// 	void*	d =&a;
// 	void*	e =&b;
// 	void*	f = &c;
// 	void*	i = &x;
// 	void*   y = &z;
// 	void*	w = &l;
// 	void*	q = &o;
// 	t_list* head=(t_list*)malloc(sizeof(t_list));
// 	head = ft_create_elem(d);
// 	head->next = ft_create_elem(e);
// 	head->next->next = ft_create_elem(f);
// 	head->next->next->next = ft_create_elem(i);
// 	head->next->next->next->next = ft_create_elem(y);
// 	head->next->next->next->next->next= ft_create_elem(w);
// 	display(head);
// 	printf("\n");
// 	ft_list_foreach_if(head, ft_add, q, ft_strcmp);
// 	display(head);
// 	return (0);
// }