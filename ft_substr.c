/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:15:51 by aosman            #+#    #+#             */
/*   Updated: 2025/06/12 20:14:52 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) 
{
	char	*res;
	size_t	i;
	size_t 	s_len;
	// if (!s)
	// 	return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	if (start >= s_len)
		len = 0;
	res = (char *)malloc(len + 1 * sizeof(char));

	if (!res)
		return (NULL);
	i = 0;
	//s = s + start;
	while (i < len )
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
