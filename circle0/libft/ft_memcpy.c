/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:36:29 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:01:29 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies `n` bytes from the memory area `src` to the memory area `dest`.
 *
 * - Copies the data byte by byte from the source (`src`) to the destination (`dest`).
 * - Assumes that the memory areas do not overlap. If they do, use `ft_memmove` instead.
 * - Returns a pointer to the destination memory area `dest`.
 *
 * Parameters:
 *   - `dest`: Pointer to the destination memory area.
 *   - `src`: Pointer to the source memory area.
 *   - `n`: The number of bytes to copy.
 *
 * Returns:
 *   - A pointer to the destination memory area `dest`.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
