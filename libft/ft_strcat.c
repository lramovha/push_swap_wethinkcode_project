/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:47:37 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/29 11:53:22 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	size_t	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
		dest[len++] = src[i++];
	dest[len] = '\0';
	return (dest);
}
