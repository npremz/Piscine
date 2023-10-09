/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:19:56 by npremont          #+#    #+#             */
/*   Updated: 2023/09/12 10:01:04 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
/*
#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "HellO";

	ft_putchar(ft_strcmp(s1, s2) + '0');
	ft_putchar(strcmp(s1, s2) + '0');
	return (0);
}
*/
