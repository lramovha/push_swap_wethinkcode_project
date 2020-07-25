/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:58:49 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 17:04:38 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *str1;

	if (!(str1 = (unsigned char *)malloc(size)))
		return (NULL);
	ft_memset(str1, 0, size);
	return ((void *)str1);
}
