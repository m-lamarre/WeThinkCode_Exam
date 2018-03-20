/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 11:09:14 by mlamarre          #+#    #+#             */
/*   Updated: 2016/08/02 11:54:22 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		arg1;
	int		arg3;
	int		res;

	res = 0;
	if (argc != 4)
		ft_putchar('\n');
	else
	{
		if (argv[2][1] == '\0')
		{
			arg1 = atoi(argv[1]);
			arg3 = atoi(argv[3]);
			if (argv[2][0] == '+')
				res = arg1 + arg3;
			else if (argv[2][0] == '-')
				res = arg1 - arg3;
			else if (argv[2][0] == '/')
				res = arg1 / arg3;
			else if (argv[2][0] == '*')
				res = arg1 * arg3;
			else if (argv[2][0] == '%')
				res = arg1 % arg3;
			printf("%i\n", res);
		}
	}
	return (0);
}
