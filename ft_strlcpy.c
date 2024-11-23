/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*  ft_strlcpy.c                                         :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*  By: etorun <etorun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*  Created: 2024/11/23 08:34:18 by etorun              #+#    #+#             */
/*   Updated: 2024/11/23 08:35:36 by etorun            ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;

	counter = 0;
	if (dstsize > 0)
	{
		while (src[counter] && (counter < dstsize - 1))
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
	return (ft_strlen(src));
}
