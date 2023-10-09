/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:27:57 by npremont          #+#    #+#             */
/*   Updated: 2023/09/09 09:59:13 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	is_lc;
	int	i;

	is_lc = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			is_lc = 0;
		i++;
	}
	return (is_lc);
}
/*
int	main(void)
{
	int test = ft_str_is_lowercase("abcde");
	write(1, &test, 1);
	test = ft_str_is_lowercase("abcDe");
	write(1, &test, 1);
	test = ft_str_is_lowercase("");
	write(1, &test, 1);
}
*/
