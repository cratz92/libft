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

static int	ft_nbr_size(long nl)
{
	int	size;

	if (!nl)
		return (0);
	size = 0;
	if (nl < 0)
	{
		nl *= -1;
		size++;
	}
	while (nl > 0 )
	{
		nl /= 10;
		size++;
	}
	return (size);
}

static void	ft_extra(char *str, long nl, int *i)
{
	if (nl > 9)
	{
		ft_extra(str, nl / 10, i);
		ft_extra(str, nl % 10, i);
	}
	else
		str[(*i)++] = '0' + (nl % 10);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*number;
	int		i;

	nbr = n;
	number = malloc((ft_nbr_size(n) + 1) * sizeof(char));
	if (!number)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		number[i++] = '-';
		nbr *= -1;
	}
	ft_extra(number, nbr, &i);
	number[i] = '\0';
	return (number);
}
