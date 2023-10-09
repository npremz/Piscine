/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:06:09 by npremont          #+#    #+#             */
/*   Updated: 2023/09/22 12:08:31 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	ft_basecheck(char *base);

char	*ft_putnbr_str(int nb, char *str, char *base, int pos)
{
	int			baselen;
	long int	n;

	n = nb;
	baselen = ft_strlen(base);
	if (n < 0)
	{
		str[0] = '-';
		return (ft_putnbr_str(n * -1, str, base, pos + 1));
	}
	else
	{
		if (n < baselen)
		{
			str[pos] = base[n];
		}
		else
		{
			ft_putnbr_str(n / baselen, str, base, pos - 1);
			str[pos] = base[n % baselen];
		}
		return (str);
	}
}

char	*ft_str_alloc(int n, int size)
{
	char	*str;

	if (n < 0)
	{
		str = malloc(size * sizeof(char) + 2);
		str[size + 1] = '\0';
	}
	else 
	{
		str = malloc(size * sizeof(char) + 1);
		str[size] = '\0';
	}
	return (str);
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*str;
	int		baselen;
	int		og_nbr;
	int		i;

	baselen = ft_strlen(base);
	og_nbr = nbr;
	i = 1;
	if (nbr < 0)
		nbr *= -1;
	while (nbr >= baselen)
	{
		nbr = nbr / baselen;
		i++;
	}
	str = ft_str_alloc(og_nbr, i);
	str = ft_putnbr_str(og_nbr, str, base, i - 1);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (ft_basecheck(base_from) == 0 || ft_basecheck(base_to) == 0)
		return (NULL);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}

int	main(void)
{
	ft_convert_base("f8", "0123456789abcdef", "012346789");
	printf("%s\n", ft_convert_base("58", "01", "0123456789"));
	return (0);
}

