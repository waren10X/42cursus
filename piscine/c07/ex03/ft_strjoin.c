/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waren10 <waren10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:43:26 by waren10          #+#    #+#             */
/*   Updated: 2024/10/03 10:49:33 by waren10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	calculate_total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
}

void	concat_with_sep(char **strs, char *sep, char *result, int size)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = result;
	while (i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	*ptr = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = calculate_total_length(size, strs, sep);
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	concat_with_sep(strs, sep, result, size);
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"je", "me", "suis", "CHIER", "dessus"};
	char	*sep;
	char	*result;

	sep = ", ";
	result = ft_strjoin(4, strs, sep);
	if (result)
	{
		printf("Concaténé : %s\n", result);
		free(result);
	}
	else
	{
		printf("Erreur d'allocation.\n");
	}
	return (0);
}*/
