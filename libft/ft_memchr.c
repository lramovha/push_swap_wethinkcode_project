/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:08:28 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/31 14:34:02 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)str;
	while (n)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		else
		{
			n--;
			temp++;
		}
	}
	return (NULL);
}
