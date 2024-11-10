/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:38:06 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:14:20 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Calculates the length of the string `str`.
 *
 * - This function iterates through each character of the string `str` until the null terminator (`'\0'`) is reached.
 * - It returns the number of characters in the string (excluding the null terminator).
 *
 * Parameters:
 *   - `str`: The string whose length is to be calculated.
 *
 * Returns:
 *   - The length of the string `str` (excluding the null terminator).
 */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
