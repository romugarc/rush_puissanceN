/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:19:39 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/07 14:44:37 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
//#include <std::*>

void	ft_putnbr(int nb);

int	main(void)
{
	int i;
	int	w;
	int	h;
	int	a;
	int	c;
	int	joueur;
	i = 1;
	scanf("%d%d%d%d%d", &w, &h, &a, &joueur, &c);
	//setbuf(stdout, NULL);
	while (1)
	{
		//sleep(1);
		//fflush(stdout);
		//ft_putnbr(2);
		if (joueur == 1)
		{
			printf("%d", 1);
			fflush(stdout);
			joueur = 2;
		}
		else
		{
			scanf("%d", &joueur);
			joueur = 1;
		}
		//printf("%d\t%d\t%d\t%d\t%d\n", w, h, a, b, c);
		//cin >> b;
		//cout << i << std::endl;
	}
	return (0);
}
