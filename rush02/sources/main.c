/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 10:43:12 by npremont          #+#    #+#             */
/*   Updated: 2023/09/23 17:03:27 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(void)
{
	char	*dict_content;
	t_dict	**dict_tab;

	dict_content = read_file("dict/numbers.dict");
	dict_tab = NULL;
	ft_dictparsing(dict_tab, dict_content);
	return (0);
}