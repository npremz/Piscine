/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:27:57 by npremont          #+#    #+#             */
/*   Updated: 2023/09/09 09:59:45 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	is_up;
	int	i;

	is_up = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			is_up = 0;
		i++;
	}
	return (is_up);
}
/*
int	main(void)
{
	int test = ft_str_is_uppercase("ABCDE");
	write(1, &test, 1);
	test = ft_str_is_uppercase("ABcDE");
	write(1, &test, 1);
	test = ft_str_is_uppercase("");
	write(1, &test, 1);
}
*/
