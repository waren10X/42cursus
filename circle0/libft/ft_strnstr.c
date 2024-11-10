/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:26 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:15:16 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the first occurrence of the string `needle` within the first `n` characters of the string `haystack`.
 * This function returns a pointer to the beginning of the found substring, or `NULL` if `needle` is not found.
 *
 * - It searches for `needle` within `haystack` but limits the search to the first `n` characters of `haystack`.
 * - If `needle` is empty or `NULL`, the function returns `haystack` itself.
 * - The search stops once `n` characters are checked or `needle` is found.
 *
 * Parameters:
 *   - `haystack`: The string in which to search.
 *   - `needle`: The substring to search for.
 *   - `n`: The maximum number of characters to search within `haystack`.
 *
 * Returns:
 *   - A pointer to the beginning of the first occurrence of `needle` within `haystack`, or `NULL` if `needle` is not found.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < n)
			{
				if (needle[j + 1] == '\0')
					return ((char *)haystack + i);
				j++;
			}
			j = 0;
		}	
		i++;
	}
	return (NULL);
}
