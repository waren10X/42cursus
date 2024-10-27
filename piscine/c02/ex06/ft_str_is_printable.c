/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:33:20 by waren10          #+#    #+#             */
/*   Updated: 2024/09/16 21:13:29 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

/* 
int main() {
    printf("%d\n", ft_str_is_printable("Hello"));   // Output: 1
    printf("%d\n", ft_str_is_printable("Hello\n")); // Output: 0
    return 0;
}
*/
