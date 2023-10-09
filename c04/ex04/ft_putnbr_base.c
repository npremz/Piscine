/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:43:04 by npremont          #+#    #+#             */
/*   Updated: 2023/09/13 09:49:29 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int	ft_has_duplicate(char c, char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;
		i++;
	}
	if (count > 1)
		return (1);
	else
		return (0);
}

int	ft_basecheck(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (ft_has_duplicate(base[i], base) == 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			baselen;
	long int	n;

	if (ft_basecheck(base) == 0)
		return ;
	n = nbr;
	baselen = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n < baselen)
	{
		ft_putchar(base[n]);
	}
	else
	{
		ft_putnbr_base(n / baselen, base);
		ft_putchar(base[n % baselen]);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(256892, "011");
	return (0);
}
*/
