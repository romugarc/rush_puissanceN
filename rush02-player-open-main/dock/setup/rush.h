/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:03:48 by tnguyen-          #+#    #+#             */
/*   Updated: 2021/11/07 18:32:14 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <stdlib.h>
# include <stdio.h>

int		main(void);
int		ft_atoi(const char *str);
char	**ft_map(int width, int height);
void	*ft_memset(void	*s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
char	**ft_mapping(char **map, int width, int joueur);
int		ft_algo(char **map, int joueur, int width, int height);
int		ft_check(char **map, int power, int i, int j, int width, int height, char c);

#endif
