/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:35:21 by waren10          #+#    #+#             */
/*   Updated: 2024/09/16 16:52:55 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	t_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/* 
int main() {
    char src[] = "Hello";
    char dest[10];
    ft_strlcpy(dest, src, 10);
    printf("%s\n", dest);  // Output: Hello
    return 0;
}
*/
