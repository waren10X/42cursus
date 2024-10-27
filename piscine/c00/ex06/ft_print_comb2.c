/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:27:34 by waren10          #+#    #+#             */
/*   Updated: 2024/09/12 13:48:59 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	digits[5];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			digits[0] = i / 10 + '0';
			digits[1] = i % 10 + '0';
			digits[2] = ' ';
			digits[3] = j / 10 + '0';
			digits[4] = j % 10 + '0';
			write(1, digits, 5);
			if (i != 98 || j != 99)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
    ft_print_comb2();
    return 0;
}*/
