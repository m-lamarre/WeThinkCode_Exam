/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 16:38:07 by mlamarre          #+#    #+#             */
/*   Updated: 2016/07/08 16:52:59 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while(src[i] != '\0')
		i++;
	i++;
	dst = (char *)malloc(sizeof(char) * i);
	while(i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return(dst);
}
