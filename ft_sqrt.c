/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 15:33:11 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/17 22:01:08 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int x)
{
	int	y;

	if (x < 0)
		return (0);
	y = 1;
	while (y * y <= x)
	{
		if (y * y == x)
			return (y);
		y++;
	}
	return (0);
}
