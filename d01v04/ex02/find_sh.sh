# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/22 18:29:22 by jnawrock          #+#    #+#              #
#    Updated: 2019/10/23 11:50:52 by jnawrock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find . -name "*.sh" | rev | cut -d / -f 1 | cut -d . -f 2-999 | rev