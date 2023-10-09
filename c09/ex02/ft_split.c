/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:22:45 by npremont          #+#    #+#             */
/*   Updated: 2023/09/22 09:04:23 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_issep(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_issep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && ft_issep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

void	ft_stralloc(char *str, char *charset, char **str_tab)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_issep(str[i], charset) == 1)
			i++;
		while (str[i] != '\0' && ft_issep(str[i], charset) == 0)
		{
			i++;
			count++;
		}
		if (count > 0)
		{
			str_tab[j] = malloc(sizeof(char) * (count + 1));
			j++;
			count = 0;
		}
	}
	str_tab[j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**str_tab;
	int		i;
	int		array_i;
	int		str_i;

	str_tab = (char **)malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	ft_stralloc(str, charset, str_tab);
	i = 0;
	array_i = 0;
	str_i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_issep(str[i], charset) == 1)
			i++;
		while (str[i] != '\0' && ft_issep(str[i], charset) == 0)
			str_tab[array_i][str_i++] = str[i++];
		if (str_tab[array_i] != 0)
		{
			str_tab[array_i][str_i] = '\0';
			str_i = 0;
			array_i++;
		}
	}
	return (str_tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int i;
	char **res;

	i = 0;
	res = ft_split("                     ", "   ");
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
*/
