/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:25:26 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 16:47:12 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*temp2;
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	i = 0;
	while (len)
	{
		if (*temp2 != (unsigned char)c)
		{
			(*temp++) = (*temp2++);
			i++;
		}
		else
		{
			*temp = *temp2;
			i++;
			return ((dest + i));
		}
		len--;
	}
	return (NULL);
}
