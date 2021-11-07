/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:19:57 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/07 15:53:26 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**ft_map(int width, int height)
{
	char	**map;
	int		height_tmp;

	height_tmp = 0;
	map = malloc(sizeof(char *) * height);
	if (!map)
		return (NULL);
	while (height_tmp < height)
	{
		map[height_tmp] = malloc(width);
		if (!map[height_tmp])
			return (NULL);
		ft_bzero(map[height_tmp], width);
		height_tmp++;
	}
	return (map);
}

char	**ft_mapping(char **map, int width, int joueur)
{
	int	index;

	index = -1;
	while (map[++index])
		if (map[index][width] == '0')
			break ;
	if (joueur == 1)
	{
		map[index][width] = '1';
		return (map);
	}
	else
	{
		map[index][width] = '2';
		return (map);
	}
}
