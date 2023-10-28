/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <lmorais-@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:01:51 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/26 19:16:19 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_print_c(unsigned char c);
int		ft_print_s(char *s);
int		ft_print_di(int nb);
int		ft_print_x(long nbr, char *base);
int		ft_print_p(unsigned long long nbr);
int		ft_print_u(unsigned int nb);
int		ft_format(const char *str, int i, int *ptr, va_list *args);

#endif
