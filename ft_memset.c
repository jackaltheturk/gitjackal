/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*  ft_memset.c                                          :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*  By: etorun <etorun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*  Created: 2024/11/23 08:34:18 by etorun              #+#    #+#             */
/*   Updated: 2024/11/23 08:35:36 by etorun            ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	counter;
	char	*ptr;

	counter = 0;
	ptr = (char *)b;
	while (counter != len)
	{
		ptr[counter] = c;
		counter++;
	}
	return (b);
}
