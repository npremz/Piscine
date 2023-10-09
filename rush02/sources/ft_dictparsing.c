/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictparsing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:28:39 by npremont          #+#    #+#             */
/*   Updated: 2023/09/23 17:08:46 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_getcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

void	ft_alloc_tab(t_dict **dict_tab, char *str)
{
	int	i;
	int count;
	int j;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
			i++;
		while (str[i] != '\0' && str[i] == ' ' || str[i] == ':' || str[i] == '\n')
			i++;
		while (str[i] != '\0' && str[i] <= 32 || str[i++] == 127)
			count++;
		if (count > 0)
		{
			dict_tab[j]->str = malloc((count + 1) * sizeof(char));
			count = 0;
			j++;
		}
	}
	dict_tab[j] = 0;
}

void	ft_fill_tab_str(t_dict **dict_tab, char *str)
{
	int i;
	int str_i;
	int array_i;

	i = 0;
	str_i = 0;
	array_i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
			i++;
		while (str[i] != '\0' && str[i] == ' ' || str[i] == ':' || str[i] == '\n')
			i++;
		while (str[i] != '\0' && str[i] <= 32 || str[i++] == 127)
		{
			dict_tab[array_i]->str[str_i] = str[i];
			str_i++;
			i++;
		}
		if (dict_tab[array_i] != 0)
		{
			dict_tab[array_i]->str[str_i] = '\0';
			array_i++;
		}
	}
}

void	ft_fill_tab_str(t_dict **dict_tab, char *str)
{
	int i;
	int str_i;
	int array_i;

	i = 0;
	str_i = 0;
	array_i = 0;
	while (str[i] != '\0')
	{

	}
}

void	ft_dictparsing(t_dict **dict_tab, char *dict_content)
{
	int	tab_count;
	
	tab_count = ft_getcount(dict_content);
	printf("%d\n", tab_count);
	dict_tab = (t_dict **)malloc(sizeof(t_dict*) * (tab_count + 1));
	ft_alloc_tab(dict_tab, dict_content);
	ft_fill_tab_str(dict_tab, dict_content);
	ft_fill_tab_int(dict_tab, dict_content)
}