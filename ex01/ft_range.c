/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:54:26 by adubeau           #+#    #+#             */
/*   Updated: 2021/03/02 17:21:21 by adubeau          ###   ########.fr       */
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

int		*ft_range(int min, int max)
{
	int *minmax;

	if (min >= max)
		return (NULL);
	minmax = (int *)malloc(sizeof(int) * (max - min));
	minmax = ft_fillarray(min, max, minmax);
	return (minmax);
}
