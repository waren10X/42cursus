/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:43:00 by waren10          #+#    #+#             */
/*   Updated: 2024/09/15 21:31:48 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/* 
int main() {
    printf("%d\n", ft_str_is_lowercase("hello"));   // Output: 1
    printf("%d\n", ft_str_is_lowercase("Hello"));   // Output: 0
    return 0;
}
*/
