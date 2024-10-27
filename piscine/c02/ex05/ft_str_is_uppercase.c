/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:43:28 by waren10          #+#    #+#             */
/*   Updated: 2024/09/15 21:33:17 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/* 
int main() {
    printf("%d\n", ft_str_is_uppercase("HELLO"));   // Output: 1
    printf("%d\n", ft_str_is_uppercase("Hello"));   // Output: 0
    return 0;
}
*/
