/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 22:26:57 by passef            #+#    #+#             */
/*   Updated: 2018/01/05 22:26:58 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int	take_map(t_filler *env)
{
	char	*line;
	int		i;

	i = 0;
	if (!env->map)
		if (!(env->map = ft_strnew_two(env->y_map, env->x_map)))
			return (-1);
	get_next_line(0, &line);
	while (i <= env->y_map)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			env->map[i] = ft_strdup(line + 4);
		else
			take_token(env, line);
		i++;
	}
	if (env->o_pos_x == 0 && env->o_pos_y == 0 &&
			env->u_pos_x == 0 && env->u_pos_y == 0)
		position(env);
	return (0);
}
