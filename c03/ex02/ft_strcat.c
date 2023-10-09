/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:26:20 by npremont          #+#    #+#             */
/*   Updated: 2023/09/12 10:06:45 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_dest;

	i = 0;
	size_dest = ft_strlen(dest);
	while (*(src + i) != '\0')
	{
		*(dest + size_dest) = *(src + i);
		i++;
		size_dest++;
	}
	*(dest + size_dest) = '\0';
	return (dest);
}
/*
#include <unistd.h>
#include <string.h>

int main(void)
{
	char mydest[50] = "Hello, ";
	char mysrc[] = "world!";
	char ftdest[50] = "Hello, ";
	char ftsrc[] = "world!";
	int i;

	ft_strcat(mydest, mysrc);
	i = 0;
	while (*(mydest + i) != '\0')
	{
		write(1, (mydest + i), 1);
		i++;
	}
	strcat(ftdest, ftsrc);
	i = 0;
	while (*(ftdest + i) != '\0')
	{
		write(1, (ftdest + i), 1);
		i++;
	}
	return (0);
}
*/
