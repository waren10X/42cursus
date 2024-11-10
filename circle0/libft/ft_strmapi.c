/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:59:40 by waren10           #+#    #+#             */
/*   Updated: 2024/11/08 20:23:18 by waren10          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function `f` to each character of the string `s`, passing the index and character, and returns a new string.
 * The result of applying `f` to each character is stored in a newly allocated string.
 *
 * - The function iterates through each character of the string `s`, applies `f` to each character along with its index, and stores the result in a new string.
 * - Memory is dynamically allocated for the new string, and it is null-terminated at the end.
 * - If memory allocation fails, the function returns `NULL`.
 *
 * Parameters:
 *   - `s`: The input string to transform.
 *   - `f`: The function to apply to each character of `s`. It takes the index and the character as arguments, and returns a modified character.
 *
 * Returns:
 *   - A new string with each character transformed by `f`, or `NULL` if memory allocation fails.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
