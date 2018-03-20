/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 11:27:33 by mlamarre          #+#    #+#             */
/*   Updated: 2016/10/03 13:46:07 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_spaces(char c, int n)
{
	if (n)
	{
		ft_putchar(c);
		ft_putchar(c);
		ft_putchar(c);
		return (0);
	}
	else
	{
		ft_putchar(c);
		return (1);
	}
}

int		ft_while (char *str, int i)
{
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	int		print_arg;

	i = 0;
	n = 0;
	print_arg = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
				print_arg = ft_spaces(argv[1][i], 0);
			else if (print_arg && ft_while(argv[1], i))
				print_arg = ft_spaces(' ', 1);
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				n = 1;
				i++;
			}
			if (n && i-- > -10)
				n = 0;
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
