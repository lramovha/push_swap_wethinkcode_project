/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:22:16 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 16:42:06 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;
	size_t	len1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s2);
	len1 = ft_strlen(s1);
	result = (char *)ft_memalloc(((len + len1) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	else
	{
		ft_strcpy(result, s1);
		ft_strcat(result, s2);
	}
	return (result);
}
