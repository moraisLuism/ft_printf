/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:09:23 by lmorais-          #+#    #+#             */
/*   Updated: 2023/10/09 08:51:37 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	search;

	search = c;
	while (*s != search)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
