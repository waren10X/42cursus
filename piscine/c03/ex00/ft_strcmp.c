/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:08:36 by waren10          #+#    #+#             */
/*   Updated: 2024/09/18 20:34:46 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h> 
int main() {
    printf("%d\n", ft_strcmp("Hello", "Hello"));   // Output: 0
    printf("%d\n", ft_strcmp("Hello", "Helwef"));    // Output: >0
    return 0;
}*/
