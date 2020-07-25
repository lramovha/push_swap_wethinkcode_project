/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:19:26 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/21 13:30:06 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	value;
	int		flag;

	flag = 1;
	value = 0;
	while (*str == ' ' || ((*str) >= 9 && (*str) <= 13))
		str++;
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		value = ((value * 10) + (*str - '0'));
		str++;
		if (value < 0 && flag == -1)
			return (0);
		else if (value < 0 && flag == 1)
			return (-1);
	}
	return (value * flag);
}
