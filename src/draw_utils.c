/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwen <mwen@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 20:11:01 by mwen              #+#    #+#             */
/*   Updated: 2021/11/20 20:16:18 by mwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

void	dup_point(t_point from, t_point *to)
{
	to->x = from.x;
	to->y = from.y;
	to->z = from.z;
	to->color = from.color;
}

int	if_yes_or(int from, int to)
{
	if (from < to)
		return (1);
	else
		return (-1);
}
