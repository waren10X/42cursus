/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:58 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:17:27 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Extracts a substring from the string `s` starting at index `start` with a maximum length of `len`.
 * It allocates a new string and copies the substring from `s` into it.
 * If memory allocation fails, it returns `NULL`.
 *
 * - The function handles cases where `start` exceeds the length of `s` by returning an empty string.
 * - It uses a loop to copy up to `len` characters from `s` starting at `start`.
 * - The new substring is null-terminated.
 *
 * Parameters:
 *   - `s`: The input string from which to extract the substring.
 *   - `start`: The index at which the substring begins.
 *   - `len`: The maximum number of characters to include in the substring.
 *
 * Returns:
 *   - A new string containing the substring, or `NULL` if allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
