/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:56:29 by waren10          #+#    #+#             */
/*   Updated: 2024/09/25 11:44:34 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_recursive_factorial(5));  // 120
    printf("%d\n", ft_recursive_factorial(0));  // 1
    printf("%d\n", ft_recursive_factorial(-5)); // 0
    return 0;
}
*/
