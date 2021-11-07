/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:19:39 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/07 19:05:33 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "rush.h"

void	ft_putnbr(int nb);

int	main(void)
{
	int	width;
	int	height;
	int	power;
	int	joueur;
	int	time;
	int	gain;
	int	move;
	int	i;
	//int	j;

	scanf("%d%d%d%d%d%d", &width, &height, &power, &joueur, &time, &gain);
	char	**truc = ft_map(width, height);
	i = 0;
	/*while (i < height)
	{
		j = 0;
		while (j < width)
		{
			printf("%c | ", truc[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	joueur = 1;
	*/
	if (width > 1)
		move = 1;
	else
		move = 0;
	if (joueur == 1)
		printf("%d\n", move);
	while (1)
	{
		if (joueur == 1)
		{
			move = ft_algo(truc, power, width, height);
			//scanf("%d", &move);
			printf("%d\n", move);
			fflush(stdout);
			truc = ft_mapping(truc, move, joueur);
			joueur = 2;
		}
		else
		{
			scanf("%d", &move);
			truc = ft_mapping(truc, move, joueur);
			joueur = 1;
		}
	}
	return (0);
}
