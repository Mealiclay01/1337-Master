/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:55:22 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/07 00:55:27 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

#include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	void		*data;
}			t_list;

t_list *ft_create_elem(void *data);

#endif
