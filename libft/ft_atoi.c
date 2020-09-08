/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbahstou <mbahstou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:29:14 by mbahstou          #+#    #+#             */
/*   Updated: 2019/11/26 13:02:01 by mbahstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		a;
	int		sign;

	i = 0;
	n = 1;
	a = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
		sign++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + str[i] - '0';
		i++;
	}
	return (sign > 1 ? 0 : a * n);
}
