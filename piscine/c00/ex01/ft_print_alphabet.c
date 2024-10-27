/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:56:10 by waren10          #+#    #+#             */
/*   Updated: 2024/10/27 23:45:03 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

/*int main()
{
    ft_print_alphabet();
    return 0;
}*/
