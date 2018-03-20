/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 17:10:25 by mlamarre          #+#    #+#             */
/*   Updated: 2016/08/23 17:22:09 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (argc == 3)
	{
		while (argv[1][a] && argv[2][b])
		{
			if (argv[1][a] == argv[2][b])
				a++;
			b++;
		}
		if (argv[1][a] == '\0')
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
