/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:13:58 by npremont          #+#    #+#             */
/*   Updated: 2023/09/16 13:41:03 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_safe(int tab[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (tab[i] == y || i + tab[i] == x + y || i - tab[i] == x - y)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_solve(int tab[10], int *res_count, int pos)
{
	int	i;
	int	j;

	if (pos == 10)
	{
		j = -1;
		*res_count += 1;
		while (++j < 10)
			ft_putchar(tab[j] + 48);
		ft_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (ft_is_safe(tab, pos, i) == 1)
			{
				tab[pos] = i;
				ft_solve(tab, res_count, pos + 1);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;
	int	res_count;

	res_count = 0;
	i = 0;
	while (i < 10)
	{
		tab[i] = -1;
		i++;
	}
	ft_solve(tab, &res_count, 0);
	return (res_count);
}
/*
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

int	main(void)
{
	ft_putnbr(ft_ten_queens_puzzle());
	return (0);
}
*/
