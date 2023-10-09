/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:18:06 by npremont          #+#    #+#             */
/*   Updated: 2023/09/10 19:59:18 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (size < 1)
		return (src_size);
	while (*(src + i) != '\0' && i < size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (src_size);
}
/*
int	main(void)
{
	char	test[] = "Hello World!";
	int	i = 0;
	unsigned int size;

	size = ft_strlcpy(test, "Mordre l", 0) + 48;
	while (*(test + i) != '\0')
	{
		write(1, &test[i], 1);
		i++;
	}
	write(1, &size, 1);
	return (0);
}
*/
