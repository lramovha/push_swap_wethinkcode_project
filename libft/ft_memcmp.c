/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:16:37 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/04 13:21:08 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*temp;
	unsigned char	*temp1;
	size_t			index;

	temp = (unsigned char *)str1;
	temp1 = (unsigned char *)str2;
	index = 0;
	if (len == 0)
		return (0);
	while (index < len - 1)
	{
		if (temp[index] == temp1[index])
		{
			index++;
		}
		else
			return (temp[index] - temp1[index]);
	}
	return (temp[index] - temp1[index]);
}
