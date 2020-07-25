/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:18:38 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/21 13:02:27 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*temp;
	unsigned char	*temp2;

	temp = (unsigned char *)dest;
	temp2 = (unsigned char *)src;
	while (len)
	{
		(*temp++) = (*temp2++);
		len--;
	}
	return (dest);
}
