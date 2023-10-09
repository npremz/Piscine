/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:31:34 by npremont          #+#    #+#             */
/*   Updated: 2023/09/26 19:11:57 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sort_inc;
	int	is_sort_dec;

	i = 0;
	is_sort_inc = 0;
	is_sort_dec = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			is_sort_inc++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			is_sort_dec++;
		i++;
	}
	if (is_sort_dec == i || is_sort_inc == i)
		return (1);
	return (0);
}

// int	ft_cmp(int a, int b)
// {
// 	return (a - b);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab1[] = {1, 2, 3, 4, 5, 6};
// 	int	tab2[] = {6, 5, 3, 2, 1, 2};
// 	int	tab3[] = {5, 2, 3, 2, 6, 6};

// 	printf("%d\n", ft_is_sort(tab1, 6, &ft_cmp));
// 	printf("%d\n", ft_is_sort(tab2, 6, &ft_cmp));
// 	printf("%d\n", ft_is_sort(tab3, 6, &ft_cmp));
// 	return (0);
// }