/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:20 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/15 21:31:21 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
int ft_printf(const char *f,...)
{
	va_list argument;
	int i = 0;
	int len = 0;
	va_start(argument,f);
	while(f[i])
	{
		if(f[i] == '%' && f[i++] == '\0')
			return -1;
		else if(f[i] == '%' && f[i++] == '%')
			len = len + ft_putchar(f[i++]); 


	}
}


int main()
{
	printf("%d",-2147483648);
}
