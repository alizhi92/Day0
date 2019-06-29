/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:05:41 by edorinda          #+#    #+#             */
/*   Updated: 2019/04/04 13:53:48 by edorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*tmp;

	i = 0;
	while (src[i] != 0)
		i++;
	tmp = (char*)malloc(sizeof(*src) * (i + 1));
	i = 0;
	while (src[i] != 0)
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = src[i];
	return (tmp);
}
