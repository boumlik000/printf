/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:14 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/18 21:24:29 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		len = len + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		len = len + ft_putnbr(nb / 10);
		len = len + ft_putchar((nb % 10) + 48);
	}
	else
		len = len + ft_putchar(nb + 48);
	return (len);
}
