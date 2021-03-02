/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 09:51:41 by adubeau           #+#    #+#             */
/*   Updated: 2021/03/02 17:19:43 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_fillarray(int min, int max, int *minmax)
{
	int i;

	i = 0;
	while (min < max)
	{
		minmax[i] = min;
		min++;
		i++;
	}
	return (minmax);
}

int		ft_strlen(int *minmax)
{
	int i;

	i = 0;
	while (minmax[i])
		i++;
	return (i);
}

int		*ft_ultimate_range(int **range, int min, int max)
{
	int *minmax;
	int i;

	if (min >= max)
		return (-1);
	minmax = (int*)malloc(sizeof(int) * (max - min));
	minmax = ft_fillarray(min, max, minmax);
	i = ft_strlen(minmax);
	*range = minmax;
	return (i);
}
