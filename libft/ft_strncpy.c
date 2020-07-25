/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:32:53 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/05 14:11:58 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t length)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < length)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < length)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
