/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:13:56 by npremont          #+#    #+#             */
/*   Updated: 2023/09/09 10:47:54 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char test[] = "ab++cd--e/z";
	int i;

	i = 0;
	ft_strupcase(test);
	while (test[i] != '\0')
	{
		write(1, &test[i], 1);
		i++;
	}
	return (0);
}
*/
