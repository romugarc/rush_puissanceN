/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:19:57 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/06 18:11:04 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**ft_map(int width, int height)
{
	char	**map;
	int		height_tmp;

	height_tmp = height;
	map = malloc(sizeof(char *) * height);
	if (!map)
		return (NULL);
	while (height_tmp != 0)
	{
		map[height_tmp] = malloc(width);
		if (!map[height_tmp])
			return (NULL);
		ft_bzero(map[height_tmp], width);
		height_tmp--;
	}
	return (map);
}
