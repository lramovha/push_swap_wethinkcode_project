/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:21:58 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 16:46:17 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_colmalloassign(int col, char const *s)
{
	int		j;
	char	*str;

	j = 0;
	if (!(str = (char *)ft_memalloc((col + 1) * sizeof(char))))
		return (NULL);
	while (j < col)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

static char	**ft_mallocrow(int row, char const *s, char c)
{
	int		col;
	int		i;
	char	**result;

	i = 0;
	col = 0;
	if (!(result = (char **)ft_memalloc((row + 1) * sizeof(char *))))
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
			{
				s++;
				col++;
			}
			result[i++] = ft_colmalloassign(col, s - col);
			col = 0;
		}
		else
			s++;
	}
	result[row] = NULL;
	return (result);
}

char		**ft_strsplit(char const *s, char c)
{
	int		row;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	row = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			row++;
		}
		else
			i++;
	}
	return (ft_mallocrow(row, s, c));
}
