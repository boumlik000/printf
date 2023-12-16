/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:14 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/15 21:31:16 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(long int n)
{
    int len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return 11;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
        len++;
	}
	if (n )
	{
		len += ft_putnbr(n / 10);
		len += ft_putchar((n % 10 )+ 48);
	}
	else
    {
		ft_putchar(n + 48);
        len++;
    }
    return len;
}
