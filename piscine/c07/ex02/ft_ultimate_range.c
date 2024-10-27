/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:22:32 by waren10          #+#    #+#             */
/*   Updated: 2024/10/03 10:51:27 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*r;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = (int *)malloc((max - min) * sizeof(int));
	if (!r)
		return (-1);
	i = 0;
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	*range = r;
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	size;

	min = 10;
	max = 214;
	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Erreur d'allocation.\n");
	}
	else if (size == 0)
	{
		printf("Pointeur nul.\n");
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
	}
	free(range);
	return (0);
}*/
