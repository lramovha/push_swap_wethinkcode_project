/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:16:13 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/05 16:45:19 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t len_s2;

	len_s2 = ft_strlen(str2);
	i = 0;
	if (len < len_s2 && str1 != NULL)
		return (NULL);
	while (str1[i] != '\0' && len_s2 <= len)
	{
		if (ft_memcmp(str1 + i, str2, len_s2) == 0)
			return ((char *)str1 + i);
		i++;
		len--;
	}
	if (*str2 == '\0')
		return ((char *)str1);
	return (NULL);
}
