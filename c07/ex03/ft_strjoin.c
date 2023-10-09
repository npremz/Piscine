/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:44:27 by npremont          #+#    #+#             */
/*   Updated: 2023/09/19 18:48:16 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_stradd(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	ft_get_strlen(int size, char **strs, char *sep)
{
	int	strlen;
	int	i;

	strlen = 0;
	i = 0;
	while (i < size)
	{
		strlen += ft_strlen(strs[i]);
		i++;
	}
	strlen += ft_strlen(sep) * (size - 1);
	return (strlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		str_size;

	if (size == 0)
	{
		str = (char *)malloc(1);
		return (str);
	}
	str_size = ft_get_strlen(size, strs, sep);
	str = (char *)malloc((str_size + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		str = ft_stradd(str, strs[i]);
		if (i + 1 < size)
			str = ft_stradd(str, sep);
		i++;
	}
	*str = '\0';
	return (str - str_size);
}
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char *test[] = {"Wouf", "Waf", "Arrw", "Bark!"};

	ft_putstr(ft_strjoin(2, test, ", "));
	return (0);
}
*/
