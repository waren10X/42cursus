/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:53:44 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:18:05 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts a lowercase letter to its uppercase equivalent.
 * If the input character is a lowercase letter (between 'a' and 'z'), it returns the corresponding uppercase letter.
 * If the input character is not a lowercase letter, it returns the character unchanged.
 *
 * Parameters:
 *   - `i`: The character to be converted.
 *
 * Returns:
 *   - The uppercase version of `i` if it's a lowercase letter, otherwise returns `i` unchanged.
 */

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}
