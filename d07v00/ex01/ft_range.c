/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 10:31:20 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/31 10:31:26 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *res;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		return (NULL);
	}
	res = (int *)malloc(sizeof(*res) * (size + 1));
	while (i < size)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
