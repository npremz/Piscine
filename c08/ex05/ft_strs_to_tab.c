/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:09:39 by npremont          #+#    #+#             */
/*   Updated: 2023/09/20 10:32:43 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int 		i;
	t_stock_str	*str_struct;

	str_struct = malloc((ac + 1) * sizeof(t_stock_str));
	while (i < ac)
	{
		str_struct[i].size = ft_strlen(av[i]);
		str_struct[i].str = av[i];
		str_struct[i].copy = ft_strdup(av[i]);
		i++;
	}
	str_struct[i].str = 0;
	return (str_struct);
}
