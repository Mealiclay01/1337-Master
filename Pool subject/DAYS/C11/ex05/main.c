/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:55:18 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/07 00:55:19 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list_push_params.c"

int	main(int ac, char **av)
{
	t_list	*head;
	t_list	*ptr;

	head = ft_list_push_params(ac, av);
	ptr = head;
	while(ptr)
	{
		printf("%s\n", ptr->data);
		ptr = ptr->next;
	}
	return (0);
}
