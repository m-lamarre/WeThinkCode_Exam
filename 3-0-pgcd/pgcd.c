/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:34:07 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/15 12:36:22 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	int		arg1;
	int		arg2;
	
	i = 0;
	n = 0;
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	if (argc == 3)
	{
		if (arg1 > arg2)
		{
			i = arg2;
			while (i > 0 && n == 0)
			{
				if (arg1 % i == 0 && arg2 % i == 0)
					n = i;
				i--;
			}
			printf("%d", n);
		}
		else if (arg1 < arg2)
		{
			i = arg1;
			while (i > 0 && n == 0)
			{
				if (arg1 % i == 0 && arg2 % i == 0)
					n = i;
				i--;
			}
			printf("%d", n);
		}
	}
	printf("\n");
	return (0);
}
