/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:22:24 by waren10          #+#    #+#             */
/*   Updated: 2024/10/03 10:53:44 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;

	min = 3;
	max = 10;
	range = ft_range(min, max);
	if (range)
	{
		for (int i = 0; i < (max - min); i++)
		{
			printf("%d ", range[i]);
		}
		printf("\n");
	}
	else
	{
		printf("Pointeur nul.\n");
	}
	free(range);
	return (0);
}*/
