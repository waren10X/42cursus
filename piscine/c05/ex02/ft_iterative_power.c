/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:58:47 by waren10          #+#    #+#             */
/*   Updated: 2024/09/25 11:46:20 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_iterative_power(2, 3));  // 8
    printf("%d\n", ft_iterative_power(5, 0));  // 1
    printf("%d\n", ft_iterative_power(2, -1)); // 0
    return 0;
}
*/
