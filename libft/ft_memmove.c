/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 13:56:37 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/21 13:08:04 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char *temp;
	unsigned char *temp1;

	temp1 = (unsigned char *)src;
	temp = (unsigned char *)dest;
	if (temp > temp1)
	{
		while (len--)
			(temp[len]) = (temp1[len]);
	}
	else
		ft_memcpy(temp, temp1, len);
	return (dest);
}
