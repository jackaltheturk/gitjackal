/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:18:31 by etorun            #+#    #+#             */
/*   Updated: 2024/10/16 10:31:23 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	copy_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	copy_len = dstsize - d_len - 1;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	if (copy_len > s_len)
		copy_len = s_len;
	ft_memcpy(dst + d_len, src, copy_len);
	dst[d_len + copy_len] = '\0';
	return (d_len + s_len);
}
