/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsharna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 22:20:52 by bsharna           #+#    #+#             */
/*   Updated: 2018/12/05 16:21:43 by bsharna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < -9 || n > 9)
		ft_putnbr(n / 10);
	if (n < 0)
	{
		if (n >= -9 && n <= 9)
			ft_putchar('-');
		ft_putchar('0' - (n % 10));
	}
	else
		ft_putchar('0' + (n % 10));
}