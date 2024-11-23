/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*  ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*  By: etorun <etorun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*  Created: 2024/11/23 08:34:18 by etorun              #+#    #+#             */
/*   Updated: 2024/11/23 08:35:36 by etorun            ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			counter;
	unsigned char	*unsig_str;

	unsig_str = (unsigned char *)str;
	counter = 0 ;
	while (counter < n)
	{
		if (unsig_str[counter] == (unsigned char)c)
			return ((void *)(str + counter));
		counter++;
	}
	return (NULL);
}
