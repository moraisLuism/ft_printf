/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:03:18 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/21 16:05:09 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		printed_lengh;
	size_t	i;
	va_list	args_list;

	va_start(args_list, str);
	i = -1;
	printed_lengh = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			if (ft_format(str, i++, &printed_lengh, &args_list) == -1)
				return (-1);
		}
		else if (i < ft_strlen(str))
		{
			if (ft_print_c((unsigned char)str[i]) == -1)
				return (-1);
			printed_lengh += 1;
		}
	}
	va_end(args_list);
	return (printed_lengh);
}
