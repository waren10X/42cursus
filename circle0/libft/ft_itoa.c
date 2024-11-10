/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:58:05 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:29:06 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_itoa:
** Converts an integer to a string representation.
**
** ft_number_size:
** Helper function that calculates the number of digits in an integer, 
** accounting for negative sign if needed.
**
** ft_itoa:
** Allocates memory and creates a string representing the given integer `n`.
** Handles negative numbers by including a '-' sign at the beginning of the string.
** Returns a pointer to the resulting string, or NULL if memory allocation fails.
*/

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;
	
	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		length += 1;
		number = -number;
	}
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	number;
	unsigned int	length;

	length = ft_number_size(n);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	if (n < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
	{
		number = n;
	}

	if (number == 0)
	{
		string[0] = '0';
	}

	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}

	return (string);
}
