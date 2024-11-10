/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:52:57 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:26:30 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Appends the string `src` to the end of `dst`, ensuring that `dst` has a total size of `size`.
 * It does not exceed the `size` of the destination buffer, ensuring safe string concatenation.
 *
 * - The function appends up to `size - 1` characters from `src` to `dst` and null-terminates `dst`.
 * - If `size` is less than or equal to the current length of `dst`, no characters from `src` are copied.
 * - The function returns the total length of the string that would have been created if
 * 		there was enough space, i.e., the initial length of `dst` plus the length of `src`.
 *
 * Parameters:
 *   - `dst`: The destination string to which `src` is appended.
 *   - `src`: The string to append to `dst`.
 *   - `size`: The total size of the destination buffer `dst`.
 *
 * Returns:
 *   - The total length of the string that would have been created if `dst` had unlimited space.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
