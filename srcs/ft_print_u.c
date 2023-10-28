/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:02:53 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/20 18:02:57 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int	len;
	int	temp;

	len = 0;
	if (nb >= 10)
	{
		temp = ft_print_di(nb / 10);
		if (temp == -1)
			return (-1);
		len += temp;
		if (ft_print_c((nb % 10) + '0') == -1)
			return (-1);
		len += 1;
	}
	else
	{
		if (ft_print_c(nb + '0') == -1)
			return (-1);
		len += 1;
	}
	return (len);
}
