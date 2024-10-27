/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:42:16 by waren10          #+#    #+#             */
/*   Updated: 2024/09/15 21:30:27 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/* 
int main() {
    printf("%d\n", ft_str_is_numeric("123456"));    // Output: 1
    printf("%d\n", ft_str_is_numeric("123abc"));    // Output: 0
    return 0;
}
*/
