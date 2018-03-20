/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:24:50 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/28 15:25:25 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    int             tmp;

    i = 0;
    tmp = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[j] < tab[i])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
