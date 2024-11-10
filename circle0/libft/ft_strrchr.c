/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:35 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:15:42 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the last occurrence of the character `c` in the string `s`.
 * It returns a pointer to the last occurrence of `c` within `s`, or `NULL` if `c` is not found.
 *
 * - The search is performed from the end of the string towards the beginning.
 * - If `c` is the null character (`'\0'`), it returns a pointer to the null terminator of `s`.
 * - The function stops once the character is found, or when the start of the string is reached.
 *
 * Parameters:
 *   - `s`: The string in which to search for the character.
 *   - `c`: The character to search for.
 *
 * Returns:
 *   - A pointer to the last occurrence of `c` in `s`, or `NULL` if `c` is not found.
 */

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
