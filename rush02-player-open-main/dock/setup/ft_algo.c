/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:28:09 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/07 16:35:59 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_algo(char **truc, int move, int joueur, int width, int height)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			if (truc[i][j] == '0')
				return (j);
			j++;
		}
		i++;
	}
	return (-1);
}
