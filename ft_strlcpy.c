/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:25:47 by aosman            #+#    #+#             */
/*   Updated: 2025/06/12 18:05:12 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	s_len;
	size_t	i;

	// if (!src)
	// 	return (0);
	s_len = ft_strlen(src);
	if (n == 0)
		return (s_len);
	i = 0;
	while (src[i] && i < (n -1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s_len);
}
