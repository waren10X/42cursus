/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:30 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 19:13:14 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Concatenates two strings `s1` and `s2` into a new string.
 *
 * - Allocates memory for a new string that holds both `s1` and `s2`, including space for the null terminator.
 * - Copies the characters from `s1` into the new string.
 * - Then copies the characters from `s2` into the new string after the contents of `s1`.
 * - Adds a null terminator at the end of the new string.
 *
 * Parameters:
 *   - `s1`: The first string to join.
 *   - `s2`: The second string to join.
 *
 * Returns:
 *   - A new string containing the concatenation of `s1` and `s2`.
 *   - NULL if memory allocation fails.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
