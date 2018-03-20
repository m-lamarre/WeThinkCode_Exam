/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 12:05:22 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/12 12:15:56 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			max(int* tab, unsigned int len)
{
	unsigned int		i;
	int					j;

	i = 0;
	j = 0;

	j = tab[i];
	i++;
	while (i <= len)
	{
		if (tab[i] > j)
		{
			j = tab[i];
			i++;
		}
		else
			i++;
	}
	return (j);
}

int main()
{
	int a[] = {1, 3, 21, 4, 83, 10};
	printf("%i\n", max(a, 6));
	return (0);
}
