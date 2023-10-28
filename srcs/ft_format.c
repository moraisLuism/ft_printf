/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:00:25 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/20 18:00:29 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *str, int i, int *prt, va_list *args)
{
	int	len;

	len = 0;
	if (str[i + 1] == 'c')
		len = ft_print_c(va_arg(*args, int));
	else if (str[i + 1] == 's')
		len = ft_print_s(va_arg(*args, char *));
	else if (str[i + 1] == 'p')
		len = ft_print_p((long long)va_arg(*args, unsigned long long));
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		len = ft_print_di(va_arg(*args, int));
	else if (str[i + 1] == 'u')
		len = ft_print_u(va_arg(*args, unsigned int));
	else if (str[i + 1] == 'x')
		len = ft_print_x(va_arg(*args, int), "0123456789abcdef");
	else if (str[i + 1] == 'X')
		len = ft_print_x(va_arg(*args, int), "0123456789ABCDEF");
	else if (str[i + 1] == '%' && str[i] == '%')
		len = ft_print_c('%');
	else
		len = ft_print_c(str[i + 1]);
	if (len == -1)
		return (-1);
	return (*prt += len);
}
