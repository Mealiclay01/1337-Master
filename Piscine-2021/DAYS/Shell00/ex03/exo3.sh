# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    exo3.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Mealiclay01 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 09:31:42 by Mealiclay01          #+#    #+#              #
#    Updated: 2021/11/28 09:31:43 by Mealiclay01         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash 

# Kerberos authentification.
klist > klist.txt
ls -l
cat klist.txt
