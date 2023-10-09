/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:27:57 by npremont          #+#    #+#             */
/*   Updated: 2023/09/09 09:57:40 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	i;

	is_numeric = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 58)
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}
/*
int	main(void)
{
	int test = ft_str_is_numeric("0123456789");
	write(1, &test, 1);
	test = ft_str_is_numeric("0123i5P789");
	write(1, &test, 1);
	test = ft_str_is_numeric("");
	write(1, &test, 1);
}
*/
