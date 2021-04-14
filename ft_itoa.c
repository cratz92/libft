/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:31:34 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/04/12 23:31:34 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbr_size(long nl, int sign)
{
	size_t	size;

	if (!nl)
		return (0);
	size = 0;
	while (nl > 0 )
	{
		nl /= 10;
		size++;
	}
	if (sign == -1)
		size++;
	return (size);
}

static void	ft_extra(char *str, long nl, size_t size, int sign)
{
	str[size] = '\0';
	str[--size] = nl % 10 + '0';
	nl /= 10;
	while (nl > 0)
	{
		str[--size] = nl % 10 + '0';
		nl /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*number;
	int		sign;
	size_t	size;

	sign = 1;
	if (n < 0)
	{
		nbr = (long)n * -1;
		sign = -1;
	}
	else
		nbr = n;
	size = ft_nbr_size(nbr, sign);
	number = malloc((size + 1) * sizeof(char));
	if (!number)
		return (NULL);
	ft_extra(number, nbr, size, sign);
	return (number);
}
