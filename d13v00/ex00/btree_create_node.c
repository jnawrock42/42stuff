/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnawrock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:18:17 by jnawrock          #+#    #+#             */
/*   Updated: 2019/11/08 11:18:19 by jnawrock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_btree;

t_btree	*btree_create_node(void *item)
	{
		t_btree	*bt;

		bt = NULL;
		bt = (t_btree *)malloc(sizeof(t_btree));
		if (bt)
		{
			bt->left = 0;
			bt->right = 0;
			bt->item = item;
		}
	return (bt);
}
