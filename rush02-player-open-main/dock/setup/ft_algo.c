/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:28:09 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/07 18:45:48 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_algo(char **map, int power, int width, int height)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (map[i][j] == '1')
			{
				if (ft_check(map, power, i, j, width, height, '1') == 1)
					return (j);
			}
			else if (map[i][j] == '2')
			{
				if (ft_check(map, power, i, j, width, height, '2') == 1)
					return (j);
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if (map[i][j] == '2')
			{
				if (ft_check(map, power - 1, i, j, width, height, '2') == 1)
					return (j);
			}
			if (map[i][j] == '1')
			{
				if (ft_check(map, power - 1, i, j, width, height, '1') == 1)
					return (j);
			}
			j++;
		}
		i++;
	}
	if (power > 3)
	{
		i = 0;
		while (i < height)
		{
			j = 0;
			while (j < width)
			{
				if (map[i][j] == '2')
				{
					if (ft_check(map, power - 2, i, j, width, height, '2') == 1)
						return (j);
				}
				if (map[i][j] == '1')
				{
					if (ft_check(map, power - 2, i, j, width, height, '1') == 1)
						return (j);
				}
				j++;
			}
			i++;
		}
	}
	if (power > 4)
	{
		i = 0;
		while (i < height)
		{
			j = 0;
			while (j < width)
			{
				if (map[i][j] == '2')
				{
					if (ft_check(map, power - 3, i, j, width, height, '2') == 1)
						return (j);
				}
				if (map[i][j] == '1')
				{
					if (ft_check(map, power - 3, i, j, width, height, '1') == 1)
						return (j);
				}
				j++;
			}
			i++;
		}
	}
	return (-1);
}
