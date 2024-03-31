/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:17:34 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/06 22:17:37 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new;

	new = malloc(sizeof(t_btree));
	if (!new)
		return (NULL);
	new->item = item;
	new->right = 0;
	new->left = 0;
	return (new);
}
