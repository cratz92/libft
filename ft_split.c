/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 02:13:35 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/04/12 02:13:35 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_array_size(char const *src, char c)
{
	size_t	size;
	size_t	i;

	if (!src)
		return (0);
	size = 0;
	i = 0;
	if (src[i] && src[i] != c)
	{
		size++;
		i++;
	}
	while (src[i])
	{
		while (src[i] == c)
		{
			i++;
			if (src[i] != c && src[i])
				size++;
		}
		i++;
	}
	return (size);
}

static char	**ft_free_mem(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static void	ft_extra(char **nextStr, size_t *strLen, char c)
{
	size_t	i;

	*nextStr += *strLen;
	*strLen = 0;
	i = 0;
	while (**nextStr && **nextStr == c)
		(*nextStr)++;
	while ((*nextStr)[i])
	{
		if ((*nextStr)[i] == c)
			return ;
		(*strLen)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	char		*nextStr;
	size_t		strLen;
	size_t		nbr;
	size_t		i;

	if (!s)
		return (NULL);
	nbr = ft_array_size(s, c);
	arr = malloc(sizeof(char *) * (nbr + 1));
	if (!arr)
		return (NULL);
	nextStr = (char *)s;
	strLen = 0;
	i = 0;
	while (i < nbr)
	{
		ft_extra(&nextStr, &strLen, c);
		arr[i] = malloc(sizeof(char) * (strLen + 1));
		if (!(arr[i]))
			return (ft_free_mem(arr));
		ft_strlcpy(arr[i++], nextStr, strLen + 1);
	}
	arr[i] = 0;
	return (arr);
}
