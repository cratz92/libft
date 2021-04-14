/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 03:22:05 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/01 03:22:05 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	while (*str == ' ' || (8 >= *str && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = 1 - 2 * (*str == '-');
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (sign * nbr);
}
