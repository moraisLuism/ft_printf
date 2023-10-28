/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:00:52 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/20 18:00:56 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(unsigned char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}