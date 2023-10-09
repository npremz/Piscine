/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:10:25 by npremont          #+#    #+#             */
/*   Updated: 2023/09/12 10:07:07 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) != '\0' && *(s1 + i) != '\0'
		&& *(s1 + i) == *(s2 + i) && i < n - 1)
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

	ft_putchar(ft_strncmp(s1, s2, 3) + '0');
	ft_putchar(strncmp(s1, s2, 3) + '0');
	return (0);
}
*/
