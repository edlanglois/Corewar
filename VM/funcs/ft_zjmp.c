/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zjmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 17:14:24 by nsabbah           #+#    #+#             */
/*   Updated: 2017/03/28 19:49:39 by mhaziza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/vm.h"

void	ft_zjmp(t_env *e, t_cursor *cursor)
{
	int	index_extra;

	if(cursor->carry)
	{
		index_extra = get_dir(e, cursor, 1, 2);
		index_extra = MODX(index_extra);
		if(index_extra == 0)
			index_extra++;
		ft_update_cursor(e, cursor, index_extra);
	}
	else
		ft_update_cursor(e, cursor, 1);
}
