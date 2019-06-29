/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:21:16 by edorinda          #+#    #+#             */
/*   Updated: 2019/04/04 13:54:16 by edorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *tmp;

	i = max - min;
	j = 0;
	if (i <= 0)
		return (NULL);
	else
	{
		tmp = (int*)malloc(sizeof(int) * i);
		while (j < i)
		{
			tmp[j] = min + j;
			j++;
		}
	}
	return (tmp);
}
