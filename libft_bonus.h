/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman <aosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 15:37:41 by aosman            #+#    #+#             */
/*   Updated: 2025/06/12 16:14:44 by aosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

#include "libft.h"

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;


t_list	*ft_lstnew(void *content);
#endif