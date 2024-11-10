/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:15 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:19:35 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compares up to `n` characters of two strings `s1` and `s2`.
 * It compares each character of `s1` and `s2` until a mismatch is found or `n` characters are compared.
 * If the strings are equal up to `n` characters, it returns 0.
 * If a mismatch is found, it returns the difference between the first unmatched characters.
 *
 * Parameters:
 *   - `s1`: The first string to compare.
 *   - `s2`: The second string to compare.
 *   - `n`: The maximum number of characters to compare.
 *
 * Returns:
 *   - 0 if the strings are equal up to `n` characters.
 *   - A positive or negative value based on the difference between the first unmatched characters.
 */

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
