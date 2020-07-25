/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:16:02 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/27 16:29:12 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t len;

	len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != '\0')
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
