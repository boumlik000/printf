/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:17 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/17 10:19:07 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i = 0 ;
    if (!str)
    {
        write(1,"[NULL]",6);
        return 6;
    }
    
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i ;
}
