/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlamarre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:56:40 by mlamarre          #+#    #+#             */
/*   Updated: 2016/11/28 15:13:14 by mlamarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct  	s_list
{
	struct s_list	*next;
	void			*data;
}               	t_list;