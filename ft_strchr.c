/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 04:24:53 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/04/18 03:17:39 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	if (!ptr)
		return (0);
	while (*ptr != (unsigned char)c)
	{
		if (*ptr == '\0')
			return (0);
		ptr++;
	}
	return (ptr);
}
