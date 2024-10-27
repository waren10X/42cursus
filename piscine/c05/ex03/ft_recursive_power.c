/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:59:25 by waren10          #+#    #+#             */
/*   Updated: 2024/09/25 11:47:38 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_recursive_power(2, 3));  // 8
    printf("%d\n", ft_recursive_power(5, 0));  // 1
    printf("%d\n", ft_recursive_power(2, -1)); // 0
    return 0;
}
*/
