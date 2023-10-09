/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:19:32 by npremont          #+#    #+#             */
/*   Updated: 2023/09/28 13:35:36 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

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
