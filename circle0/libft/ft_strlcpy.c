/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:04:44 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:14:01 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies up to `size - 1` characters from the string `src` to `dest` and null-terminates `dest`.
 * It ensures that `dest` has a null terminator at the end even if `src` is longer than `size`.
 *
 * - If `size` is 0, the function returns the length of `src` without modifying `dest`.
 * - If `size` is greater than 0, it copies up to `size - 1` characters from `src` to `dest`, and then null-terminates `dest`.
 * - The function returns the total length of `src`, which is the length of the string it would have copied if there were no `size` limit.
 *
 * Parameters:
 *   - `dest`: The destination string to copy to.
 *   - `src`: The source string to copy from.
 *   - `size`: The maximum number of characters to copy from `src`.
 *
 * Returns:
 *   - The total length of `src` (not the number of characters copied).
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
