/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:03:22 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 13:44:32 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str1, int c)
{
	while (*str1 != '\0' || c == 0)
	{
		if (*str1 == (unsigned char)c)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
