/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:50:21 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 16:01:36 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return (begin_list);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tail;

	if (*begin_list1 != NULL)
	{
		tail = ft_list_last(*begin_list1);
		tail->next = begin_list2;
	}
}

/*#include <stdio.h>

t_list *ft_create_elem(void *data)
{
	t_list* new_node;

	new_node = (t_list*)malloc(sizeof(t_list));
	if(new_node)
	{
		new_node->data = data;
		new_node->next = NULL;
	}
	return (new_node);
}

void display(t_list *head)
{
	while(head != NULL)
	{
		printf("%d ",*(int *)head->data);
		head = head->next;
	}
}

void    ft_add(void *data)
{
	*(int *)data = *(int *)data + *(int *)data;
}

int    ft_strcmp(char *s1, char *s2)
{
	int    i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

int main()
{
	void*    d = malloc(sizeof(int));
	void*    e = malloc(sizeof(int));
	void*    f = malloc(sizeof(int));
	void*    i = malloc(sizeof(int));
	void*    y = malloc(sizeof(int));
	void*    w = malloc(sizeof(int));
	void*    q = malloc(sizeof(int));
	*((int *)d) = 10;
	*((int *)e) = 20;
	*((int *)f) = 30;
	*((int *)i) = 40;
	*((int *)y) = 50;
	*((int *)w) = 60;
	*((int *)q) = 10;
	t_list* head = (t_list*)malloc(sizeof(t_list));
	head = ft_create_elem(d);
	// head->next = ft_create_elem(e);
	// head->next->next = ft_create_elem(f);
	// head = NULL;
	t_list* head2 = (t_list*)malloc(sizeof(t_list));
	head2 = ft_create_elem(i);
	head2->next = ft_create_elem(y);
	head2->next->next= ft_create_elem(w);
	// head2 = NULL;
	display(head);
	printf("\n");
	ft_list_merge(&head, head2);
	display(head);
	return (0);
}*/
