/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:03:33 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/06 17:45:05 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(void)
{
	int	height;
	int	width;

	printf("Width: ");
	scanf("%d", &width);
	printf("Height:");
	scanf("%d", &height);
	ft_map(width, height);
}
