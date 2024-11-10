/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:35:08 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:24:31 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if the integer `i` represents an alphanumeric character (a letter or a digit).
 *
 * - Returns `1` if `i` is a letter (uppercase or lowercase) or a digit (0-9).
 * - Returns `0` otherwise.
 */

int	ft_isalnum(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9'))
	{
		return (1);
	}
	return (0);
}
