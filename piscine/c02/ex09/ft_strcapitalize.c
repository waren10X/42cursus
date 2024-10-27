/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:34:53 by waren10          #+#    #+#             */
/*   Updated: 2024/09/16 20:03:47 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !new_word)
			str[i] += 32;
		new_word = !(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9');
		i++;
	}
	return (str);
}

/* 
int main() {
    char str[] = "hello, how are you? i'm fine!";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}
*/
