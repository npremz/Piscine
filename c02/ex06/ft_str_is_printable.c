/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 09:27:57 by npremont          #+#    #+#             */
/*   Updated: 2023/09/09 10:00:02 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_str_is_printable(char *str)
{
	int	is_pr;
	int	i;

	is_pr = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			is_pr = 0;
		i++;
	}
	return (is_pr);
}
/*
int	main(void)
{
	int test = ft_str_is_printable("sfgnsgf552353787680152303;/,].[][][");
	write(1, &test, 1);
	test = ft_str_is_printable("asfsh\nfbdzj\0");
	write(1, &test, 1);
	test = ft_str_is_printable("");
	write(1, &test, 1);
}
*/
