/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:10 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/17 10:19:00 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int				len;
	unsigned long	bs;

	len = 0;
	bs = ft_strlen(base);
	if (nbr >= bs)
		len += ft_putnbr_base(nbr / bs, base);
        
	len += ft_putchar(base[nbr % bs]);
	return (len);
}
