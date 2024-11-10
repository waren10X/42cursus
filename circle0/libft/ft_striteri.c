/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:19 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:12:55 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function `f` to each character in the string `s`, passing the index and character.
 *
 * - Iterates through the string `s` and calls the function `f` for each character.
 * - The function `f` is called with two arguments: the index of the character and a pointer to the character itself.
 *
 * Parameters:
 *   - `s`: The string to iterate over.
 *   - `f`: A function to apply to each character of the string.
 *     - `f` takes two parameters: the index of the character and a pointer to the character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
