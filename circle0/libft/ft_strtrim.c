/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:49 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:17:04 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Trims characters from both ends of the string `s1` that are present in the string `set`.
 * It removes all characters from the beginning and end of `s1` that match any character in `set`, and returns the trimmed string.
 * If `s1` or `set` is `NULL`, or memory allocation fails, it returns `NULL`.
 *
 * - The function uses two loops to identify the first and last characters of `s1` that are not in `set`.
 * - It allocates memory for the new string and copies the trimmed portion of `s1` into it.
 * - The new string is null-terminated.
 *
 * Parameters:
 *   - `s1`: The input string to trim.
 *   - `set`: The set of characters to trim from the start and end of `s1`.
 *
 * Returns:
 *   - A new string with characters from `s1` trimmed, or `NULL` if allocation fails or inputs are `NULL`.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}
