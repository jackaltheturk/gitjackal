/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*  ft_lstlast_bonus.c                                   :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*  By: etorun <etorun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*  Created: 2024/11/23 08:34:18 by etorun              #+#    #+#             */
/*   Updated: 2024/11/23 08:35:36 by etorun            ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}