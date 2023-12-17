/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:20 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/17 10:44:29 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	check_type(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count = ft_posputnbr(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		count = ft_putstr("0x");
		count += ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	else if (c == 'x')
		count = ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count = ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else
		count = ft_putchar('%');
	return (count);
}

int ft_printf(const char *f,...)
{
	va_list argument;
	int i = 0;
	int len = 0;
	va_start(argument,f);
	while(f[i])
	{
		if(f[i] == '%' && f[i + 1] == '\0')
			return -1;
		else if(f[i] == '%' && f[i+1] == '%')
			len = len + ft_putchar(f[i++]); 
		else if ((f[i] == '%') && (ft_strchr("cspdiuxX%", f[i+1]) == 1))
			len += check_type(f[++i], argument);
		else
			len += ft_putchar(f[i]);
		i++;
	}
	va_end(argument);
	return len;
}


int main()
{
	char s[] = "cspdiuxX%";
	ft_printf("%p\n",s);
	printf("%p",s);
	
}
