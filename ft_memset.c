/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 05:43:26 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/04 18:23:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_str;

	i = 0;
	cast_str = (unsigned char *) s;
	while (i < n && cast_str)
	{
		cast_str[i] = c;
		i++;
	}
	return ((void *) cast_str);
}
