/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:19:39 by rgarcia           #+#    #+#             */
/*   Updated: 2021/11/06 18:27:27 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	w;
	int	h;
	int	a;
	int	b;
	int	c;
	scanf("%d", &w);
	scanf("%d", &h);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d\t%d\t%d\t%d\t%d\n", w, h, a, b, c);
	return (0);
}
