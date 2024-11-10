/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:34:48 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:26:35 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates memory for an array of `count` elements, each of `size` bytes,
 * and initializes all bytes in the allocated memory to zero.
 *
 * - If either `count` or `size` is zero, it defaults both to 1 to ensure
 *   allocation of at least one byte.
 * - Calculates the total size (`b`) as `count * size`.
 * - Allocates `b` bytes using `malloc`. If allocation fails, returns `NULL`.
 * - If allocation succeeds, uses `ft_bzero` to set all bytes to zero.
 * - Returns a pointer to the allocated, zero-initialized memory.
 */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
