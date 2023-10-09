/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:25:36 by npremont          #+#    #+#             */
/*   Updated: 2023/09/28 13:34:14 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, 
	int (*cmpf)(void *, void *))
{
	if (*root == NULL)
		*root = ft_create_node(item);
	if ((*cmpf)(item, (*root)->item) < 0)
	{
		if ((*root)->left)
			btree_insert_data(&(*root)->left, item, (*cmpf));
		else
			(*root)->left = ft_create_node(item);
	}
	else
	{
		if ((*root)->right)
			btree_insert_data(&(*root)->right, item, (*cmpf));
		else
			(*root)->right = ft_create_node(item);
	}
}
/*
t_btree	*ft_create_node(void *item)
{
	t_btree	*elem;

	elem = NULL;
	elem = (t_btree *)malloc(sizeof(t_btree));
	if (elem)
	{
		elem->item = item;
		elem->left = NULL;
		elem->right = NULL;
	}
	return (elem);
}

#include <stdio.h>

 void	display(void *item)
{
	printf("%s ", (char *)item);
}

int	ft_strcmp(void *s1, void *s2)
{
	int	i;

	i = 0;
	char *str1 = (char *)s1;
	char *str2 = (char *)s2;
	while (*(str1 + i) != '\0' && *(str2 + i) != '\0' && *(str1 + i) == *(str2 + i))
	{
		i++;
	}
	return (*(str1 + i) - *(str2 + i));
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, applyf);
	if (root->right)
		btree_apply_prefix(root->right, applyf);
}
int	main()
{
	t_btree	level3ll = {NULL, NULL, "3"};
	t_btree	level3lr = {NULL, NULL, "4"};
	t_btree	level3rl = {NULL, NULL, "6"};
	t_btree	level3rr = {NULL, NULL, "7"};
	t_btree level2l = {&level3ll, &level3lr, "2"};
	t_btree	level2r = {&level3rl, &level3rr, "5"};
	t_btree	level1 = {&level2l, &level2r, "1"};
	t_btree	*tree = &level1;
	btree_insert_data(&tree, "0", &ft_strcmp);
	btree_apply_prefix(&level1, display);
	printf("\n");
	btree_insert_data(&tree, "9", &ft_strcmp);
	btree_apply_prefix(&level1, display);
	return (0);
} */