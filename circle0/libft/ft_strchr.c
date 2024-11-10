/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:37:01 by waren10           #+#    #+#             */
/*   Updated: 2024/11/10 13:44:09 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Searches for the first occurrence of the character `i` in the string `s`.
 *
 * - Iterates through the string `s` and checks each character.
 * - If the character `i` is found, returns a pointer to it in the string.
 * - If `i` is the null terminator (`'\0'`), it returns a pointer to the end of the string.
 * - If the character is not found, returns `NULL`.
 *
 * Parameters:
 *   - `s`: The string to search in.
 *   - `i`: The character to search for.
 *
 * Returns:
 *   - A pointer to the first occurrence of `i` in the string `s`, or `NULL` if `i` is not found.
 */

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == i)
		{
			return ((char *)s);
		}
		s++;
	}
	if (i == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
