/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:21:21 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/27 17:03:51 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*u_dst;
	const unsigned char		*u_src;
	size_t					i;

	u_dst = (unsigned char*)dst;
	u_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		u_dst[i] = u_src[i];
		if (u_dst[i] == (unsigned char)c)
		{
			return (u_dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
