/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:06:10 by npremont          #+#    #+#             */
/*   Updated: 2023/09/12 15:23:33 by npremont         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	j = size_dest;
	if (size < 1)
		return (size_src);
	while (*(src + i) != '\0' && i + j < size - 1)
	{
		*(dest + j) = *(src + i);
		i++;
	}
	*(dest + j) = '\0';
	if (size_dest > size)
		return (size_src + size);
	else
		return (size_dest + size_src);
}
/*
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

int main(void)
{
	char	test[30] = "Hello, ";
	char	tests[] = "world!";
	char	testf[30] = "Hello, ";
	char	testsf[] = "world!";

	ft_putnbr(ft_strlcat(test, tests, 10));
	ft_putnbr(strlcat(testf, testsf, 10));
	return (0);
}
*/
