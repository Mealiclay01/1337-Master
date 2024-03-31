/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_highlight_biggest_square.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:41:36 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/10/13 17:41:57 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_highlight_biggest_square(void)
{
	int	i;
	int	j;

	i = g_current_square.y;
	j = g_current_square.x;
	while (i < g_current_square.l + g_current_square.y)
	{
		j = g_current_square.x;
		while (j < g_current_square.l + g_current_square.x)
		{
			g_board.bd[i][j] = g_chars[2];
			j++;
		}
		i++;
	}
}
