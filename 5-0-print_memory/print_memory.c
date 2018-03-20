/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:22:29 by mlamarre          #+#    #+#             */
/*   Updated: 2016/12/08 14:50:04 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(unsigned char nb)
{
	if (nb >= 16)
	{
		ft_print_hex(nb / 16);
		if (nb % 16 > 9)
			ft_putchar(nb % 16 - 10 + 'a');
		else
			ft_putchar(nb % 16 + '0');
	}
	else
	{
		if (nb > 9)
			ft_putchar(nb - 10 + 'a');
		else
			ft_putchar(nb + '0');
	}
}

void	print_memory(const void *addr, size_t size)
{
	size_t			i;
	size_t			n;
	unsigned char	*mem;

	i = 0;
	n = 0;
	mem = (unsigned char *)addr;
	while (i < size)
	{
		if (mem[i] < 16)
			ft_putchar('0');
		ft_print_hex(mem[i]);
		if ((i + 1) % 2 == 0)
			ft_putchar(' ');
		if ((i + 1) % 16 == 0)
		{
			n = i - 15;
			while (n <= i)
			{
				if (mem[n] < 32 || mem[n] > 126)
					ft_putchar('.');
				else
					ft_putchar(mem[n]);
				n++;
			}
			ft_putchar('\n');
		}
		i++;
	}
	if (size % 16 != 0 && size > 0)
	{
		n = size;
		while ((n % 16) != 0)
		{
			write(1, "  ", 2);
			if ((n + 1) % 2 == 0)
				ft_putchar(' ');
			n++;
		}
		n = size - (size % 16);
		while (n < size)
		{
			if (mem[n] < 32 || mem[n] > 126)
				ft_putchar('.');
			else
				ft_putchar(mem[n]);
			n++;
		}
		ft_putchar('\n');
	}
}
