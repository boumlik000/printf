/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:10 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/18 21:31:01 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base, int i)
{
	int				len;
	unsigned long	bs;

	len = 0;
	if (i && !nbr)
		return (ft_putstr("(nil)"));
	if (i)
		len += ft_putstr("0x");
	bs = ft_strlen(base);
	if (nbr >= bs)
		len += ft_putnbr_base(nbr / bs, base, 0);
	len += ft_putchar(base[nbr % bs]);
	return (len);
}
