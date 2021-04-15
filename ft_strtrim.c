/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:24:39 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/03/29 13:24:39 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchr(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
		if (*(set + i++) == c)
			return (1);
	return (0);
}

static char	*ft_extra(const char *s1, const char *set, size_t *k, size_t i)
{
	size_t	j;
	size_t	len;
	char	*dst;

	len = ft_strlen(s1);
	j = 0;
	while (ft_checkchr(*(s1 + len - j - 1), set))
		j++;
	dst = ft_calloc(sizeof(char), len - (j + i) + 1);
	if (!dst)
		return (0);
	while (*k < len - (j + i))
	{
		*(dst + *k) = *(s1 + i + *k);
		*k += 1;
	}
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	len;
	char	*str;

	if (!s1)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (ft_checkchr(*(s1 + i), set))
		i++;
	k = 0;
	if (i == len)
		str = malloc(1);
	else
		str = ft_extra(s1, set, &k, i);
	if (str != NULL)
		*(str + k) = '\0';
	return (str);
}
