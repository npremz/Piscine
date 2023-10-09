/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:44:21 by npremont          #+#    #+#             */
/*   Updated: 2023/09/27 15:28:23 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*next;

	previous = NULL;
	next = NULL;
	while (*begin_list != NULL)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = previous;
		previous = *begin_list;
		*begin_list = next;
	}
	*begin_list = previous;
}
