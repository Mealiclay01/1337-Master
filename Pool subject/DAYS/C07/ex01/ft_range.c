
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:37:57 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/10/06 09:45:11 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arr_size(int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	len;

	i = 0;
	len = arr_size(min, max);
	if (len < 0)
		return (0);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
