/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:32:23 by jnawrock          #+#    #+#             */
/*   Updated: 2019/10/26 20:04:01 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0 || i > 12)
	{
		return (0);
	}
	if (i == 0)
	{
		return (1);
	}
	if (i > 0)
	{
		i--;
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
