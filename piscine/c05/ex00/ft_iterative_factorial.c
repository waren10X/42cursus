/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:53:25 by waren10          #+#    #+#             */
/*   Updated: 2024/09/25 11:42:36 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_iterative_factorial(5));  // 120
    printf("%d\n", ft_iterative_factorial(0));  // 1
    printf("%d\n", ft_iterative_factorial(-5)); // 0
    return 0;
}
*/
