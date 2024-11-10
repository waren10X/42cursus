/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:35:45 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:25:41 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Checks if the integer `i` represents a digit (0-9).
 *
 * - Returns `1` if `i` is a digit (between '0' and '9').
 * - Returns `0` otherwise.
 */

int	ft_isdigit(int i)
{
	while ('0' <= i && i <= '9')
	{
		return (1);
	}
	return (0);
}
