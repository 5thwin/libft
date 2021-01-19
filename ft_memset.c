/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunoh <seunoh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 17:23:24 by seunoh            #+#    #+#             */
/*   Updated: 2021/01/19 22:01:57 by seunoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	fill;

	dest = s;
	fill = c;
	i = 0;
	while (i++ < n)
	{
		*(dest + i) = fill;
	}
	return (s);
}
