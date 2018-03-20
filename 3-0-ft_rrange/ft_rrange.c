/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:32:13 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/08 14:53:51 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		*ft_start_range(int start, int end)
{
	int		*range;
	int		i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(range = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((end - ++i) >= start)
		range[i] = end - i;
	return (range);
}

int		*ft_end_range(int start, int end)
{
	int		*range;
	int		i;

	i = 0;
	while ((start + i) <= end)
		i++;
	if (!(range = (int *)malloc(sizeof(int) * i)))
		return (NULL);
	i = -1;
	while ((start + ++i) <= end)
		range[i] = start + i;
	return (range);
}

int		*ft_rrange(int start, int end)
{
	if (start < end)
		return(ft_start_range(start, end));
	return (ft_end_range(end, start));
}
