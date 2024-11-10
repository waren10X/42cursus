/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:52 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:02:24 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Sets the first `len` bytes of the memory area `b` to the value of `c`.
 *
 * - Fills the memory block pointed to by `b` with the value `c` (cast to unsigned char).
 * - The filling is done byte-by-byte in reverse order.
 * - Returns a pointer to the memory area `b`.
 *
 * Parameters:
 *   - `b`: Pointer to the memory area to fill.
 *   - `c`: The value to set the bytes to (converted to unsigned char).
 *   - `len`: The number of bytes to set.
 *
 * Returns:
 *   - A pointer to the memory area `b`.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
