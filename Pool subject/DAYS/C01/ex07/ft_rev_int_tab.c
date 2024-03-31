/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:17:44 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/11/28 10:41:39 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	tmp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		tmp = tab[first];
		tab[first] = tab[last];
		tab[last] = tmp;
		first++;
		last--;
	}
}
