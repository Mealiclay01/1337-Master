/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 07:55:59 by Mealiclay01          #+#    #+#             */
/*   Updated: 2021/11/28 12:49:27 by Mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_num_or_char(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	first_char;
	int	i;

	i = 0;
	first_char = 1;
	while (str[i])
	{
		if (is_num_or_char(str[i]))
		{
			if (first_char && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!first_char && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			first_char = 0;
		}
		else
			first_char = 1;
		i++;
	}
	return (str);
}
