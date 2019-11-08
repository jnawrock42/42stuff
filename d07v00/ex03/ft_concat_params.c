/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:00:33 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/31 16:00:36 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_counter(char *argvi)
{
	int	j;

	j = 0;
	while (argvi[j] != '\0')
	{
		j++;
	}
	j++;
	return (j);
}

char	*ft_injector(int j, char *outpt, char *inpt)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (outpt[k] != '\0')
		k++;
	while (inpt[l] != '\0')
	{
		outpt[k + l] = inpt[l];
		l++;
	}
	if (j)
		outpt[k + l] = '\0';
	else
		outpt[k + l] = '\n';
	return (outpt);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;
	char	*out;

	size = 0;
	i = 1;
	while (i < argc)
	{
		size = size + ft_counter(argv[i]);
		i++;
	}
	out = (char *)malloc(sizeof(char) * (size + 2));
	i = 1;
	j = 0;
	while (i < argc)
	{
		out = ft_injector(j, out, argv[i]);
		i++;
		if (i + 1 == argc)
			j = 1;
	}
	return (out);
}
