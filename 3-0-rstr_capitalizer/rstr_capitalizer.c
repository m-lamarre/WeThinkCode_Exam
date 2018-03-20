/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 16:03:08 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/14 16:55:31 by mlamarre         ###   ########.fr       */
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
		if ((str[i + 1] == '\0' || str[i + 1] == ' ') && (str[i] >= 'A' && str[i] <= 'Z'))
			ft_putchar(str[i]);
		else if ((str[i + 1] == '\0' || str[i + 1] == ' ') && (str[i] >= 'a' && str[i] <= 'z'))
			ft_putchar(str[i] - 32);
		else if (str[i + 1] != ' ' && (str[i] >= 'A' && str[i] <= 'Z'))
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_check(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
