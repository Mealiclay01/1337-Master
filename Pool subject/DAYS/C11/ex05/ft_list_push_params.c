/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:55:15 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/07 00:55:16 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*create_node(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	insert_node(t_list **head, void *data)
{
	t_list	*elem;

	if (*head)
	{
		elem = create_node(data);
		elem->next = *head;
		*head = elem;	
	}
	else
		*head = create_node(data);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*elem;
	int	i;

	elem = 0;
	i = 1;
	while (i < ac)
		insert_node(&elem, av[i++]);
	return (elem);
}
