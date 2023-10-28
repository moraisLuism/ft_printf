/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:02:12 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/20 18:02:15 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_display_nb(unsigned long long nb, char *base, int base_size)
{
	long long	reste;
	int			printed_len;
	int			temp;

	printed_len = 0;
	reste = nb % base_size;
	nb = nb / base_size;
	if (nb > 0)
	{
		temp = ft_display_nb(nb, base, base_size);
		if (temp == -1)
			return (-1);
		printed_len += temp;
	}
	temp = ft_print_c(base[reste]);
	if (temp == -1)
		return (-1);
	printed_len += temp;
	return (printed_len);
}

int	ft_print_p(unsigned long long nbr)
{
	char	*base;
	int		base_size;
	int		printed_len;
	int		temp;

	base = "0123456789abcdef";
	if (nbr == 0)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		return (3);
	}
	base_size = 0;
	while (base[base_size])
		base_size++;
	printed_len = 0;
	if (ft_print_s("0x") == -1)
		return (-1);
	printed_len += 2;
	temp = ft_display_nb(nbr, base, base_size);
	if (temp == -1)
		return (-1);
	return (printed_len + temp);
}
