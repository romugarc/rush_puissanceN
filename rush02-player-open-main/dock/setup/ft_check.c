/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:49:50 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/07 19:02:07 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char **map, int power, int i, int j, int width, int height, char c)
{
	int	x;
	int	y;
	int n;

	x = i;
	y = j;
	n = 0;
	while (map[x][y] == c && x < width)
	{
		x++;
		n++;
	}
	if (n == power - 1)
		return (1);
	x = i;
	n = 0;
	while (map[x][y] == c && y < height)
	{
		y++;
		n++;
	}
	if (n == power - 1)
		return (1);
	y = j;
	n = 0;
	while (map[x][y] == c && x < width && y < height)
	{
		x++;
		y++;
		n++;
	}
	if (n == power - 1)
		return (1);
	x = i;
	y = j;
	n = 0;
	while (map[x][y] == c && x > -1 && y > -1)
	{
		x--;
		y--;
		n++;
	}
	if (n == power - 1)
		return (1);
	return (0);
}
