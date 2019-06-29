/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edorinda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:05:17 by edorinda          #+#    #+#             */
/*   Updated: 2019/04/04 14:01:26 by edorinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else
		return (-1);
}

char	**ft_sort(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	ft_sort(argc, argv);
	while ((argc - i) != 1)
	{
		ft_putstr(argv[i + 1]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
