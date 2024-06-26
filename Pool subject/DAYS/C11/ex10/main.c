/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:56:53 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/07 00:56:55 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_list_foreach_if.c"

t_list	*create_elem(void *data);
void	print_list(t_list *head);
void	insert_elem(t_list **head, void *data);

void	test_func(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list	*head;

	head = 0;
	insert_elem(&head, "this");
	insert_elem(&head, "is");
	insert_elem(&head, "just");
	insert_elem(&head, "a");
	insert_elem(&head, "test");
	insert_elem(&head, "1337");
	insert_elem(&head, "ding");
	insert_elem(&head, "dong");
	print_list(head);
	printf("Another test:\n");
	ft_list_foreach_if(head, test_func, "1337", strcmp);
	return (0);
}

void	insert_elem(t_list **head, void *data)
{
	t_list	*elem;

	if (*head)
	{
		elem = create_elem(data);
		elem->next = *head;
		*head = elem;
	}
	else
		*head = create_elem(data);
}

t_list	*create_elem(void *data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->data = data;
	new->next = 0;
	return (new);
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%s ", head->data);
		head = head->next;
	}
	putchar('\n');
}
