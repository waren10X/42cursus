/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:04:00 by waren10          #+#    #+#             */
/*   Updated: 2024/10/02 20:06:40 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	size_file(char *argv)
{
	int		size;
	char	buffer;
	int		fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		exit(1);
	}
	while (read(fd, &buffer, 1) > 0)
	{
		size++;
	}
	close(fd);
	return (size);
}
