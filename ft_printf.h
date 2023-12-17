/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:23 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/16 22:07:15 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ft_printf_h
# define ft_printf_h

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int ft_putchar(int c);
int ft_putstr(char *str);
int	ft_putnbr(long int n);
int	ft_posputnbr(unsigned int n);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_strlen(const char *str);	
int ft_strchr(const char *s, int c);

#endif


