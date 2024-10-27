/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:08:56 by waren10          #+#    #+#             */
/*   Updated: 2024/09/18 20:36:33 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include<stdio.h> 
int main() {
    printf("%d\n", ft_strncmp("Hello", "Hello", 3));  // Output: 0
    printf("%d\n", ft_strncmp("Hello", "Hesff", 4));   // Output: 0
    return 0;
}*/
