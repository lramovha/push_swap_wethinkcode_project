/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:01:53 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/04 13:25:02 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (ft_memcmp(str1 + i, str2, ft_strlen(str2)) == 0)
			return ((char *)(str1 + i));
		i++;
	}
	if (*str1 == '\0' && *str2 == '\0')
		return ((char *)str1);
	return (NULL);
}
