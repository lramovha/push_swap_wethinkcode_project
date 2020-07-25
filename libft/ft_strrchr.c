/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:50:10 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 13:49:07 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str1, int c)
{
	size_t i;

	i = ft_strlen(str1);
	while (i > 0)
	{
		if (str1[i] == (unsigned char)c)
			return ((char *)(str1 + i));
		i--;
	}
	if (str1[0] == (unsigned char)c)
		return ((char *)(str1 + i));
	return (NULL);
}
