/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboumlik <mboumlik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:31:23 by mboumlik          #+#    #+#             */
/*   Updated: 2023/12/18 21:45:19 by mboumlik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_posputnbr(unsigned int n);
int	ft_putnbr_base(unsigned long nbr, char *base, int i);
int	ft_strlen(const char *str);
int	ft_strchr(const char *s, int c);
int	ft_printf(const char *f, ...);

#endif
