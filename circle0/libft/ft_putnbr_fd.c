/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:58:42 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:03:45 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Writes the integer `n` to the file descriptor `fd`.
 *
 * - Handles negative numbers by printing a minus sign and recursively calling itself with the positive value.
 * - For large negative numbers like `-2147483648`, it directly prints the string `"-2147483648"`.
 * - For positive numbers, it recursively breaks down the number into digits and prints each one.
 *
 * Parameters:
 *   - `n`: The integer to write.
 *   - `fd`: The file descriptor to write to.
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
