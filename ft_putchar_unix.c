/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_unix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:56:24 by bsharna           #+#    #+#             */
/*   Updated: 2019/01/10 15:58:40 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(int c)
{
	int one;
	int two;

	if (c < 128)
		write(1, &c, 1);
	else
	{
		one = 192 + c / 64;
		two = 128 + c % 64;
		write(1, &one, 1);
		write(1, &two, 1);
	}
}
