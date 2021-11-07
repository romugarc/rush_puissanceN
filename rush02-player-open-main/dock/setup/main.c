/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:19:39 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/07 16:35:37 by tnguyen-         ###   ########.fr       */
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
	int	n;
	int	c;
	int	joueur;
	int	i;
	int	j;
	int	move;

	scanf("%d%d", &width, &height);
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
	while (1)
	{
		if (joueur == 1)
		{
			move = algo(truc);
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
