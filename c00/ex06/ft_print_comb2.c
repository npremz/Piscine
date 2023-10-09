/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:41:27 by npremont          #+#    #+#             */
/*   Updated: 2023/09/06 16:43:01 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_num(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
	else
	{
		ft_putchar((a / 10) + 48);
		ft_putchar((a % 10) + 48);
	}
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar((b / 10) + 48);
		ft_putchar((b % 10) + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_display_num(a, b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
