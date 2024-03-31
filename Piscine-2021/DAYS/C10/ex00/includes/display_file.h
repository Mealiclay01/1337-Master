/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:26:00 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/12/06 22:26:04 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
#define DISPLAY_FILE_H

#include <unistd.h>
#include <fcntl.h>

void	ft_puterr(char *err);
void	display_file(char *file);

#endif
