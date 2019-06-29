/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:37:45 by edorinda          #+#    #+#             */
/*   Updated: 2019/04/04 16:37:49 by edorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	convert(int nb)
{
	char c;

	c = (char)(nb + 48);
	ft_putchar(c);
}

void	ft_putnbr2(int nb)
{
	int i;
	int j;

	i = 1;
	j = nb;
	while (nb >= 10)
	{
		nb = nb / 10;
		i = i * 10;
	}
	nb = j;
	while (i >= 1)
	{
		nb = ((nb / i) % 10);
		convert(nb);
		i = (i / 10);
		nb = j;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
	{
		ft_putchar(45);
		ft_putchar(50);
		ft_putnbr2(147483648);
	}
	if ((nb < 0) && (nb > -2147483648))
	{
		ft_putchar(45);
		ft_putnbr2(-nb);
	}
	if (nb >= 0)
	{
		ft_putnbr2(nb);
	}
}
