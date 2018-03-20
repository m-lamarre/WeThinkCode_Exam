/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:39:25 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/14 15:14:11 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			ft_putchar(str[i]);
			i++;
		}
		if (!str[i])
			return (0);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 32);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;

	i = 1;
	n = argc;
	if (n > 1)
	{
		while (i < n)
		{
			ft_check(argv[i]);
			i++;
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
