/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_vars.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:47:10 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/10/13 17:47:12 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_VARS_H
# define GLOBAL_VARS_H

typedef struct s_square {
	int	x;
	int	y;
	int	l;
}	t_square;

typedef struct s_board {
	int		x;
	int		y;
	int		obs_count;
	char	**bd;
}	t_board;

t_square	*g_obstacles;
t_board		g_board;
t_square	g_current_square;
char		g_chars[4];
int			g_size;
int			g_x;
int			g_y;

#endif
