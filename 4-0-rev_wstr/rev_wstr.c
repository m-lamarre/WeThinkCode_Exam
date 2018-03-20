/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:27:21 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/14 15:43:18 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rev_wstr(char *str, int n)
{
	int		i;
	int		start;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!str[i])
			return (0);
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		rev_wstr(&str[i], 0);
		write(1, &str[start], i - start);
		if (!n)
			ft_putchar(' ');
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1], 1);
	ft_putchar('\n');
	return (0);
}
