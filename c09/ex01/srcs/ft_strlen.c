/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:16:25 by npremont          #+#    #+#             */
/*   Updated: 2023/09/21 14:30:46 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*

#include <unistd.h>

int	main(void)
{
	char	str[] = "Fred";
	int		size;

	size = ft_strlen(str) + 48;
	write(1, &size, 1);
	return (0);
}
*/
