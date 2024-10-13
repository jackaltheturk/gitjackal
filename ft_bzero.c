/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:22:07 by etorun            #+#    #+#             */
/*   Updated: 2024/10/10 18:45:31 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	counter;

	counter = 0;
	ptr = (char *)s;
	while (counter != n)
	{
		ptr[counter] = 0;
		counter++;
	}
}
