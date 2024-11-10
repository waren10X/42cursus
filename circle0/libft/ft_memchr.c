/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:09 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:27:32 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Searches for the first occurrence of the character `c` in the first `n` bytes of the memory area pointed to by `s`.
 *
 * - Iterates through the memory area `s` and compares each byte with the target character `c`.
 * - If a match is found, returns a pointer to the first occurrence of `c` in the memory block.
 * - If `c` is not found within the first `n` bytes, returns `NULL`.
 *
 * Parameters:
 *   - `s`: Pointer to the memory area to search.
 *   - `c`: The character to search for (converted to unsigned char).
 *   - `n`: The number of bytes to search in the memory area.
 *
 * Returns:
 *   - A pointer to the first occurrence of `c` in `s`, or `NULL` if `c` is not found.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
