/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:05:59 by npremont          #+#    #+#             */
/*   Updated: 2023/09/09 14:37:08 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_rec02(int x, int y, char diag_c1, char diag_c2)
{
	int	li;
	int	col;

	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	li = 1;
	while (li++ <= y)
	{
		col = 1;
		while (col++ <= x)
		{
			if ((li == 1 && col == 1) || (li == 1 && col == x))
				ft_putchar(diag_c1);
			else if ((li == y && col == 1) || (li == y && col == x))
				ft_putchar(diag_c2);
			else if (li == 1 || (li == y) || (col == 1) || (col == x))
				ft_putchar('B');
			else 
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush02(int x, int y)
{
	if (x == -2147483648 || y == -2147483648)
	{
		ft_putchar('N');
		ft_putchar('O');
		ft_putchar('N');
		ft_putchar('.');
		return ;
	}
	if (x >= 0 || y >= 0)
	{
		ft_print_rec02(x, y, 'A', 'B', 'C');
	}
	else
	{
		ft_print_rec02(x, y, 'C', 'A', 'B');
	}
}
