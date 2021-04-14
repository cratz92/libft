/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 06:21:15 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/15 06:21:15 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	str = malloc(i * sizeof(char));
	if (!str)
		return (NULL);
	while (i-- >= 0)
	{
		*str = *s;
		str++;
		s++;
	}
	return (str);
}
