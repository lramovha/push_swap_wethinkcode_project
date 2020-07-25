/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:35:10 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 16:41:04 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (!(str = (char *)ft_memalloc((len + 1) * sizeof(char))))
		return (NULL);
	else
	{
		while (len)
		{
			str[i] = s[start];
			i++;
			start++;
			len--;
		}
	}
	str[i] = '\0';
	return (str);
}
