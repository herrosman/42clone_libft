/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:06:20 by aosman            #+#    #+#             */
/*   Updated: 2025/06/12 17:32:21 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list *current = *lst;
	char	*c = (char *)current->content;
	printf("clearing node |%s|\n", c);
	//deleted and frees the given node and all its successors.
	if (!lst || !del)
		return;
	//loop through the lst
		
}