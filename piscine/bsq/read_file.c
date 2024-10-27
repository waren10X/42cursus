/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:03:19 by waren10          #+#    #+#             */
/*   Updated: 2024/10/02 13:35:41 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**read_file(char *argv, int *rows, int *cols)
{
	int		fd;
	int		i;
	char	**buffer;

	i = 0;
	fd = open(argv, O_RDONLY);
	*rows = get_nb_lines(argv);
	*cols = get_nb_columns(argv);
	get_2nd_line(fd);
	buffer = malloc(*rows * sizeof(char *));
	if (!buffer)
		exit(1);
	while (i < *rows)
	{
		buffer[i] = malloc((*cols + 1) * sizeof(char));
		if (!buffer[i])
			exit(1);
		if (read(fd, buffer[i], *cols) == -1)
			exit(1);
		buffer[i][*cols] = '\0';
		get_2nd_line(fd);
		i++;
	}
	close(fd);
	return (buffer);
}
