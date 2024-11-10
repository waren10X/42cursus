/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:58:18 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:03:03 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Writes the character `c` to the file descriptor `fd`.
 *
 * Parameters:
 *   - `c`: The character to write.
 *   - `fd`: The file descriptor to write to.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
