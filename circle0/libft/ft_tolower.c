/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:46 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:17:48 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts an uppercase letter to its lowercase equivalent.
 * If the input character is an uppercase letter (between 'A' and 'Z'), it returns the corresponding lowercase letter.
 * If the input character is not an uppercase letter, it returns the character unchanged.
 *
 * Parameters:
 *   - `i`: The character to be converted.
 *
 * Returns:
 *   - The lowercase version of `i` if it's an uppercase letter, otherwise returns `i` unchanged.
 */

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}
