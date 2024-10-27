/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:00:14 by waren10          #+#    #+#             */
/*   Updated: 2024/09/25 11:50:49 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int main() {
    printf("%d\n", ft_fibonacci(7));   // 13
    printf("%d\n", ft_fibonacci(0));   // 0
    printf("%d\n", ft_fibonacci(-1));  // -1
    return 0;
}
*/
