/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:20 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:27:56 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compares the first `n` bytes of two memory blocks `s1` and `s2`.
 *
 * - Iterates through the first `n` bytes of both memory areas.
 * - If any byte differs between `s1` and `s2`, it returns the difference between the corresponding bytes.
 * - If all `n` bytes are the same, it returns 0, indicating the memory blocks are equal.
 *
 * Parameters:
 *   - `s1`: Pointer to the first memory block.
 *   - `s2`: Pointer to the second memory block.
 *   - `n`: The number of bytes to compare.
 *
 * Returns:
 *   - A negative value if the first differing byte in `s1` is less than the corresponding byte in `s2`.
 *   - A positive value if the first differing byte in `s1` is greater than the corresponding byte in `s2`.
 *   - 0 if the memory blocks are identical for the first `n` bytes.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
