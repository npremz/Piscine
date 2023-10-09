/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:07:00 by npremont          #+#    #+#             */
/*   Updated: 2023/09/23 11:10:18 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	which_sign;

	which_sign = 1;
	nbr = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			which_sign *= -1;
		}
		i++;
	}
	while (str[i] >= '\0' && str[i] <= '9' && str[i] >= '0')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	return (nbr * which_sign);
}