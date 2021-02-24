/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 03:09:27 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/02/24 04:19:42 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destSize)
{
	size_t	destLen;
	size_t	srcLen;
	int		i;

	i = 0;
	destLen = ft_strlen(dest);
	srcLen = ft_strlen(src);
	if (destSize < destLen + 1)
		return (srcLen + destSize);
	else
	{
		while ((src[i] != '\0') && (destLen + 1 + i < destSize))
		{
			dest[destLen + i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (destLen + srcLen);
}
