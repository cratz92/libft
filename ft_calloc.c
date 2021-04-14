/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 05:53:39 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/15 05:53:39 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			space;
	unsigned char	*ptr;

	space = nmemb * size;
	ptr = malloc(space);
	if (!ptr)
		return (NULL);
	while (*ptr)
	{
		*ptr = 0;
		ptr++;
	}
	return ((void *)ptr);
}
