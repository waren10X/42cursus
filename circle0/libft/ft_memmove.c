/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:40 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:01:59 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies `n` bytes from the memory area `s2` to the memory area `s1`, handling overlapping regions.
 *
 * - If the source (`s2`) is located before the destination (`s1`), it copies the bytes backwards to avoid overwriting data.
 * - If the source and destination do not overlap or the source is after the destination, it copies the bytes forwards.
 * - Returns a pointer to the destination memory area `s1`.
 *
 * Parameters:
 *   - `s1`: Pointer to the destination memory area.
 *   - `s2`: Pointer to the source memory area.
 *   - `n`: The number of bytes to copy.
 *
 * Returns:
 *   - A pointer to the destination memory area `s1`.
 */

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	len = 0;
	if (s2 < s1)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}
