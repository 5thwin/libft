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
	unsigned char	*tmp;
	unsigned char	fill;

	tmp = s;
	fill = c;
	i = 0;
	while (i++ < n)
	{
		*(tmp + i) = fill;
	}
	return (s);
}
