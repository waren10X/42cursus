/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:37:12 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:12:35 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Creates a new string that is a duplicate of the string `s`.
 *
 * - Allocates memory for the new string, including space for the null terminator.
 * - Copies each character from the original string `s` into the newly allocated string.
 * - Adds a null terminator at the end of the new string.
 *
 * Parameters:
 *   - `s`: The string to duplicate.
 *
 * Returns:
 *   - A pointer to the newly allocated string containing a copy of `s`.
 *   - NULL if memory allocation fails.
 */

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
