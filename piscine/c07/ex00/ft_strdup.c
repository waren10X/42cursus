/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:22:16 by waren10          #+#    #+#             */
/*   Updated: 2024/10/03 10:54:16 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*#include <stdlib.h>

int	main(void)
{
	char	*src;
	char	*copy;

	src = "ben 10 >>>";
	copy = ft_strdup(src);
	if (copy)
		printf("Original: %s\nCopie: %s\n", src, copy);
	else
		printf("Erreur d'allocation.\n");
	free(copy);
	return (0);
}*/
