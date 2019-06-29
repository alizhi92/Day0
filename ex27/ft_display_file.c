/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:37:59 by edorinda          #+#    #+#             */
/*   Updated: 2019/04/04 17:45:24 by edorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "header.h"

#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fb;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		write(1, "File name missing.", 18);
		write(1, "\n", 1);
	}
	else if (argc >= 3)
	{
		write(1, "Too many arguments.", 19);
		write(1, "\n", 1);
	}
	else
	{
		fb = open(argv[1], O_RDONLY);
		ret = read(fb, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}
