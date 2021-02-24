/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 00:02:43 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/02/24 02:49:02 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destSize)
{
	size_t	srcLen;
	size_t	i;

	srcLen = 0;
	while (*src)
	{
		*src++;
		srcLen++;
	}
	if (destSize < 1)
		return (srcLen);
	i = 0;
	while (src[i] && (i < (destSize - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcLen);
}
