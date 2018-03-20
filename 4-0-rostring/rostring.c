/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:40:39 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/25 14:50:33 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_iswhitespace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ' || c == '\0');
}

int		main(int argc, char **argv)
{
	int 	i;
	int 	n;
	int 	start;

	i = 0;
	n = 0;
	start = 0;
	if (argc > 1)
	{
		while (argv[1][start] != '\0' && ft_iswhitespace(argv[1][start]))
			start++;
		while (!ft_iswhitespace(argv[1][start + n]))
			n++;
		i = start + n;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] != '\0' && ft_iswhitespace(argv[1][i]))
				i++;
			if (argv[1][i] == '\0')
				break;
			if (argc == 0)
				ft_putchar(' ');
			argc = 0;
			while (!ft_iswhitespace(argv[1][i]))
				write(1, argv[1] + i++, 1);
		}
		if (n && argc == 0)
			ft_putchar(' ');
		write(1, argv[1] + start, n);
	}
	ft_putchar('\n');
	return (0);
}
