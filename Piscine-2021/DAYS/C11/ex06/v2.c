/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:55:42 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/07 00:55:43 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *to_free;

	if (!begin_list || !*begin_list)
		return ;
	while (*begin_list)
	{
		to_free = *begin_list;
		*begin_list = (*begin_list)->next;
		free(to_free);
	}
	*begin_list = NULL;
}
