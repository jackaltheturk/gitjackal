/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*  ft_putnbr_fd.c                                       :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*  By: etorun <etorun@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*  Created: 2024/11/23 08:34:18 by etorun              #+#    #+#             */
/*   Updated: 2024/11/23 08:35:36 by etorun            ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
