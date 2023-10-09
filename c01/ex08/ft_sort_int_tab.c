/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:56:50 by npremont          #+#    #+#             */
/*   Updated: 2023/09/07 21:10:15 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 1;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			temp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = temp;
			i = 0;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	a[] = {3, 5, 1 , 4, 2};
	int	i;

	i = 0;
	ft_sort_int_tab(a, 5);
	while (i < 5)
	{
		printf("%d", a[i]);
		i++;
	}
	return (0);
}
*/
