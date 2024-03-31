/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 13:48:34 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/06 22:25:47 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_puterr.c"
#include "display_file.c"

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_puterr("File name missing.");
	else if (ac > 2)
		ft_puterr("Too many arguments.");
	else
		display_file(av[1]);
	return (0);
}
