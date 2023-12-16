/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:10 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/15 21:41:08 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int				count;
	unsigned long	bs;

	count = 0;
	bs = ft_strlen(base);
	if (nbr >= bs)
		count += ft_putnbr_base(nbr / bs, base);
        
	count += ft_putchar(base[nbr % bs]);
	return (count);
}
