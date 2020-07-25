/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:28:31 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/05 15:54:42 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	len;

	len = ft_strlen(dest);
	if (len > destsize)
		return (destsize + ft_strlen((char *)src));
	if (len < destsize)
		ft_strncat(dest, src, destsize - len - 1);
	return (len + ft_strlen((char *)src));
}
