/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:44:22 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 16:43:12 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t	len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	if (ft_strcmp(str, "") == 0)
		len = 0;
	else
		len = ft_strlen(str) - 1;
	while (str[len] == ' ' || str[len] == '\n' || str[len] == '\t')
		len--;
	return (ft_strsub(str, 0, len + 1));
}
