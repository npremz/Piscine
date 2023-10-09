/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:47:46 by npremont          #+#    #+#             */
/*   Updated: 2023/09/08 09:11:47 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 51;
	b = 8;
	pa = &a;
	pb = &b;
	ft_ultimate_div_mod(pa, pb);
	a = a + 48;
	b = b + 48;
	write(1, &a, 1);
	write(1, &b, 1);

	return(0);
}
*/
