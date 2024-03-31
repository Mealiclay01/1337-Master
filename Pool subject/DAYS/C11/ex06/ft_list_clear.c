/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:55:34 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/07 00:55:35 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*ptr;

	ptr = *begin_list;
	if (!ptr)
		return ;
	while (ptr)
	{
		tmp = ptr;
		free(ptr);
		ptr = tmp->next;
	}
	*begin_list = NULL;
}
