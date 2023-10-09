/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:18:36 by npremont          #+#    #+#             */
/*   Updated: 2023/09/08 09:11:15 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int	c;
	int	d;
	int *div;
	int *mod;

	c = 0;
	d = 0;
	div = &c;
	mod = &d;
	ft_div_mod(51, 8, div, mod);
	c = c + 48;
	d = d + 48;
	write(1, &c, 1);
	write(1, &d, 1);
}
*/
