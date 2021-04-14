/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:21:59 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/15 02:21:59 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcPtr;
	unsigned char	*destPtr;

	srcPtr = (unsigned char *)src;
	destPtr = (unsigned char *)dest;
	i = 0;
	if (destPtr > srcPtr)
	{
		while (n-- > 0)
		{
			destPtr[n] = srcPtr[n];
		}
	}
	else
	{
		while (i++ < n)
		{
			destPtr[i] = srcPtr[i];
		}
	}
	return (dest);
}
