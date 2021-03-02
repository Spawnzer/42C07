/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 09:51:41 by adubeau           #+#    #+#             */
/*   Updated: 2021/03/02 17:32:06 by adubeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		return (0);
		*range = NULL;
	}
	max -= min;
	*range = malloc(sizeof(int) * max);
	if (!*range)
		return (-1);
	while (i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
