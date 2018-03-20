/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:05:21 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/28 13:07:37 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int 	i;
	int 	n;

	n = atoi(argv[1]);
	if (argc == 2)
	{
		if (argv[1][0] == '\0')
		{
			printf("\n");
			return (0);
		}
		if (n == 1)
		{
			printf("1\n");
			return (0);
		}
		while (argv[1] != '\0')
		{
			i = 1;
			while (++i <= n)
			{
				if (n % i == 0)
				{
					printf("%i", i);
					n = n / i;
					break;
				}
			}
			if (n == 1)
				break;
			else
				printf("*");
		}
	}
	printf("\n");
	return (0);
}
