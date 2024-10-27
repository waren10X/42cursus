/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:09:18 by waren10          #+#    #+#             */
/*   Updated: 2024/09/18 20:37:48 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h> 
int main() {
    char dest[20] = "Hello, ";
    char src[] = "World!";
    printf("%s\n", ft_strcat(dest, src));  // Output: Hello, World!
    return 0;
}*/
