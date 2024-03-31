/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_stdin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:41:26 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/10/13 17:41:28 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "global_vars.h"

void	ft_handle_stdin(void)
{
	char	**map;

	g_size = 30000;
	map = stdin_to_stdout();
	if (!map)
	{
		ft_puterr("map error\n");
		return ;
	}
	ft_bsq(map);
}
