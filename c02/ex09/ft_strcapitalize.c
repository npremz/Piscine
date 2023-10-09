/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:53:41 by npremont          #+#    #+#             */
/*   Updated: 2023/09/10 17:49:23 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_str_is_alphanum(char c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!str[i - 1] && ft_is_lowercase(str[i]) == 1)
			str[i] = str[i] - 32;
		if (ft_str_is_alphanum(str[i - 1]) == 0 && ft_is_lowercase(str[i]) == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	int i = 0;
	char test[] = "2i<E%#;<L:%9+K?Bpawh~F  Oh4:qg";

	ft_strcapitalize(test);
	while (test[i] != '\0')
	{
		write(1, &test[i], 1);
		i++;
	}
	return (0);
}
*/
