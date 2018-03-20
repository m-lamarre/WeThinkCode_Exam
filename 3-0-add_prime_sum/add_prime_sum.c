/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:15:30 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/08 14:09:24 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar('-');
	}
	else if (n >= 10)
	{
		ft_putnbr(n % 10);
		ft_putnbr(n / 10);
	}
	else
		ft_putchar(n + 48);
}

int		ft_isdigit(int n)
{
	if (n > 47 && n < 58)
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int		i;
	int		n;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		n = -1;
	else
		n = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		i = (i * 10) + (*str - '0');
		str++;
	}
	return (i * n);
}

int		ft_prime_sum(int nb)
{
	int		n;

	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

void	add_prime_sum(int nb)
{
	int		i;
	int		n;

	i = 0;
	n = 2;
	while (n <= nb)
	{
		if (ft_prime_sum(n))
			i = i + n;
		n++;
	}
	ft_putnbr(i);
}

int		main(int argc, char **argv)
{
	int		n;

	n = ft_atoi(argv[1]);
	if (argc == 2)
		add_prime_sum(n);
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
