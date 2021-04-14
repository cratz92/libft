/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 08:04:40 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/15 08:04:40 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		size1;
	size_t		size2;
	char		*str;
	size_t		strLen;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if (size1 == 0 || size2 == 0)
		return (0);
	strLen = size1 + size2 + 1;
	str = malloc(strLen * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, strLen);
	ft_strlcat(str, s2, strLen);
	return (str);
}
