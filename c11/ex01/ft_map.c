/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:39:02 by npremont          #+#    #+#             */
/*   Updated: 2023/09/22 10:09:32 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res_tab;
	int	i;

	res_tab = malloc(length * (sizeof(int)));
	if (res_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res_tab[i] = f(tab[i]);
		i++;
	}
	return (res_tab);
}
/*
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	int test[] = {3, 4, 5, 6, 7};
	int *res_test;
	int i;

	res_test = ft_map(test, 5, &ft_fibonacci);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", res_test[i]);
		i++;
	}
	return (0);
}
*/
