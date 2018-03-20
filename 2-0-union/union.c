/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 11:30:50 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/14 14:09:07 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp1(char *s1, char s2)
{
	int		i;

	i = 0;
	while (s1[i])
		if (s1[i++] == s2)
			return (1);
	return (0);
}

int		ft_strcmp2(char *s1, char s2, int i)
{
	while (--i >= 0)
		if (s1[i] == s2)
			return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	i = -1;
	while (argv[1][++i])
		if (!ft_strcmp2(argv[1], argv[1][i], i))
			ft_putchar(argv[1][i]);
	i = -1;
	while (argv[2][++i])
		if (!ft_strcmp1(argv[1], argv[2][i]) &&
			!ft_strcmp2(argv[2], argv[2][i], i))
			ft_putchar(argv[2][i]);
	ft_putchar('\n');
	return (0);
}
