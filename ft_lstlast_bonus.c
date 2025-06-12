/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:41:27 by aosman            #+#    #+#             */
/*   Updated: 2025/06/12 17:26:48 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*last;
	current = lst;
	while(current)
	{
		char *s = (char *)current->content;
		printf("%s->",s);
		last = current;
		current = current->next;
	}
	return (last);
}