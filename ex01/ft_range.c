/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 10:54:26 by adubeau           #+#    #+#             */
/*   Updated: 2021/03/03 10:09:49 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *minmax;

	i = 0;
	if (min >= max)
		return (NULL);
	max -= min;
	minmax = malloc(sizeof(int) * max);
	if (!minmax)
		return (NULL);
	while (i < max)
	{
		minmax[i] = min + i;
		i++;
	}
	return (minmax);
}
