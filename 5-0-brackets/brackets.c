/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 08:53:51 by mlamarre          #+#    #+#             */
/*   Updated: 2016/12/13 12:33:04 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int     bracket_count(char *str)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            count++;
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
            count--;
        i++;
    }
    return (count);
}

int     brackets(char *str)
{
    int     i;
    int     count;
    char    arr[100];

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '(' || str[i] == '[' ||  str[i] == '{')
        {
            arr[count] = str[i];
            count++;
        }
        else if (str[i] == ')')
        {
            if (arr[count - 1] == '(')
                count--;
        }
        else if (str[i] == ']')
        {
            if (arr[count - 1] == '[')
                count--;
        }
        else if (str[i] == '}')
        {
            if (arr[count - 1] == '{')
                count--;
        }
        i++;
    }
    return (count);
}

int     main(int argc, char **argv)
{
    int     i;
    char	*tmp;

    i = 1;
    if (argc >= 2)
    {
		while (argv[i])
        {
            tmp = argv[i];
            if (bracket_count(tmp) == 0)
            {
                if (brackets(tmp) == 0)
                    ft_putstr("OK\n");
                if (brackets(tmp) != 0)
                    ft_putstr("Error\n");
            }
            else
                ft_putstr("Error\n");
            i++;
        }
    }
    else
        ft_putstr("\n");
    return (0);
}
