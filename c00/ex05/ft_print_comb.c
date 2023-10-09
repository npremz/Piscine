/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:57:42 by npremont          #+#    #+#             */
/*   Updated: 2023/09/06 14:39:31 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_num(char c)
{
	write(1, &c, 1);
}

void	ft_display_num(char a, char b, char c)
{
	a = a + 48;
	b = b + 48;
	c = c + 48;
	ft_write_num(a);
	ft_write_num(b);
	ft_write_num(c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_display_num(a, b, c);
				if (!(a == 7 && b == 8 && c == 9))
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
