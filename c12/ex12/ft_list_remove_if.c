/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:12:42 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 11:41:24 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_free_struct(t_list *elem, void (*free_fct)(void *))
{
	t_list	*temp;

	(*free_fct)((elem)->data);
	temp = (elem)->next;
	free(elem);
	elem = temp;
	return (elem);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), 
void (*free_fct)(void *))
{
	t_list	*prev_elem;
	t_list	*actu_elem;
	t_list	*next_elem;

	actu_elem = *begin_list;
	prev_elem = NULL;
	while (actu_elem)
	{
		next_elem = actu_elem->next;
		if ((*cmp)(actu_elem->data, data_ref) == 0)
		{
			if (prev_elem != NULL)
			{
				next_elem = ft_free_struct(actu_elem, (*free_fct));
				prev_elem->next = next_elem;
			}
			else if (actu_elem->next == NULL && prev_elem != NULL)
				prev_elem->next = NULL;
			else
				*begin_list = ft_free_struct(actu_elem, (*free_fct));
		}
		if (*begin_list != next_elem)
			prev_elem = actu_elem;
		actu_elem = next_elem;
	}
}

// void    ft_free(void *data)
// {
// 	free(data);
// }

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

// void    ft_add(void *data)
// {
// 	*(int *)data = *(int *)data + *(int *)data;
// }

// int    ft_strcmp(char *s1, char *s2)
// {
// 	int    i;

// 	i = 0;
// 	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && *(s1 + i) == *(s2 + i))
// 	{
// 		i++;
// 	}
// 	return (*(s1 + i) - *(s2 + i));
// }

// int main()
// {
// 	void*    d = malloc(sizeof(int));
// 	void*    e = malloc(sizeof(int));
// 	void*    f = malloc(sizeof(int));
// 	void*    i = malloc(sizeof(int));
// 	void*    y = malloc(sizeof(int));
// 	void*    w = malloc(sizeof(int));
// 	void*    q = malloc(sizeof(int));
// 	*((int *)d) = 10;
// 	*((int *)e) = 10;
// 	*((int *)f) = 10;
// 	*((int *)i) = 10;
// 	*((int *)y) = 10;
// 	*((int *)w) = 10;
// 	*((int *)q) = 10;
// 	t_list* head=(t_list*)malloc(sizeof(t_list));
// 	head = ft_create_elem(d);
// 	head->next = ft_create_elem(e);
// 	head->next->next = ft_create_elem(f);
// 	head->next->next->next = ft_create_elem(i);
// 	head->next->next->next->next = ft_create_elem(y);
// 	head->next->next->next->next->next= ft_create_elem(w);
// 	display(head);
// 	printf("\n");
// 	ft_list_remove_if(&head, q, ft_strcmp, ft_free);
// 	display(head);
// 	return (0);
// }