/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:06:18 by lmorais-          #+#    #+#             */
/*   Updated: 2023/09/21 10:07:02 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*result;
	unsigned long	i;

	i = 0;
	result = malloc(count * size);
	if (!result)
		return (NULL);
	while (count * size > i)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
