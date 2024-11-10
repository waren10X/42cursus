/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:35:22 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:24:53 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if the integer `i` represents an alphabetic character (a letter).
 *
 * - Returns `1` if `i` is a letter (either uppercase or lowercase).
 * - Returns `0` otherwise.
 */

int	ft_isalpha(int i)
{
	if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
	{
		return (1);
	}
	return (0);
}
