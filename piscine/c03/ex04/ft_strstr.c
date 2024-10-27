/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:47:10 by waren10          #+#    #+#             */
/*   Updated: 2024/09/18 20:41:33 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h> 
int main() {
    char str[] = "Hello, World!";
    printf("%s\n", ft_strstr(str, "World"));  // Output: World!
    return 0;
}*/
