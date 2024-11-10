/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:34:37 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:26:34 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Sets the first `n` bytes of the memory area pointed to by `s` to zero.
 *
 * - Uses `ft_memset` to fill `n` bytes of `s` with the value `0`.
 * - Commonly used to clear or initialize memory.
 */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
