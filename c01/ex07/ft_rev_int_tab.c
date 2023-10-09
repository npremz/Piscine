/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:37:58 by npremont          #+#    #+#             */
/*   Updated: 2023/09/07 19:55:33 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[10];
	int	i;
	int	ib;

	i = 0;
	ib = size - 1;
	while (i < size)
	{
		temp[ib] = tab[i];
		i++;
		ib--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
/*
int	main(void)
{
	int a[] = {1, 2, 3, 4};
	int i;

	i = 0;
	ft_rev_int_tab(a, 4);
	while(i < 4)
	{
		printf("%d", a[i]);
		i++;
	}
	return (0);
}
*/
