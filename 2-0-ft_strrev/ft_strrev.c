/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 15:01:52 by mlamarre          #+#    #+#             */
/*   Updated: 2016/08/04 13:36:04 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	char	tmp;

	i = 0;
	n = ft_strlen(str);
	while (n - 1 > i)
	{
		tmp = str[i];
		str[i] = str[n - 1];
		str[n - 1] = tmp;
		n--;
		i++;
	}
	return (str);
}
