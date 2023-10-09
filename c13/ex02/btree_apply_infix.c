/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:05:04 by npremont          #+#    #+#             */
/*   Updated: 2023/09/28 13:35:55 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
	{
		btree_apply_infix(root->left, applyf);
	}
	(*applyf)(root->item);
	if (root->right != NULL)
	{
		btree_apply_infix(root->right, applyf);
	}
}
/*
#include <stdio.h>

void	display(void *item)
{
	printf("%s\n", (char *)item);
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

	btree_apply_infix(&level1, display);
	return (0);
}*/