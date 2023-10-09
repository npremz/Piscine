/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:15:41 by npremont          #+#    #+#             */
/*   Updated: 2023/09/10 10:22:06 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	i;

	is_alpha = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}

/*
int	main(void)
{
	int test = ft_str_is_alpha("shgfefbfggtrg");
	write(1, &test, 1);
	test = ft_str_is_alpha("shgf1fbf;gtrg");
	write(1, &test, 1);
	test = ft_str_is_alpha("");
	write(1, &test, 1);
	return (0);
}
*/
