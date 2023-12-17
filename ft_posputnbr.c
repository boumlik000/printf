/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_posputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:05 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/17 10:18:54 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_posputnbr(unsigned int n)
{
    int len = 0;
    
	if (n >= 10)
	{
		len += ft_posputnbr(n / 10);
		len += ft_posputnbr(n % 10);
	}
	else
    {
		ft_putchar(n + 48);
        len++;
    }
    return len;
}

