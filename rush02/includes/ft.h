/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:16:03 by npremont          #+#    #+#             */
/*   Updated: 2023/09/23 16:54:22 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct s_dict
{
	int		value;
	char	*str;
}	t_dict;

int     ft_atoi(char *str);
char	*read_file(const char *path);
void	ft_dictparsing(t_dict **dict_tab, char *dict_content);
int		ft_atoi(char *str);
