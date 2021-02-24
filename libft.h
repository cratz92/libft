/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrito-l <cbrito-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 23:53:01 by cbrito-l          #+#    #+#             */
/*   Updated: 2021/02/24 17:25:45 by cbrito-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>



int	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t destSize);
size_t	ft_strlcat(char *dest, const char *src, size_t destSize);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);


#endif
