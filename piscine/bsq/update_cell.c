/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_cell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:48:07 by waren10          #+#    #+#             */
/*   Updated: 2024/10/02 17:48:24 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	update_cell(char **grid, int **dp, int i, int j)
{
	int	min_val;

	if (grid[i][j] == '.')
	{
		min_val = get_min_val(dp, i, j);
		dp[i][j] = 1 + min_val;
	}
	else
	{
		dp[i][j] = 0;
	}
}
