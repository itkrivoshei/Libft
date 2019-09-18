/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:06:39 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/17 20:41:06 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				i;
	long long		res;
	long long		tmp;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isallwspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		str[i] == '-' ? sign = -1 : 0;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		tmp = res;
		res = res * 10 + (str[i] - 48);
		if (tmp > res)
			return (sign == -1 ? 0 : -1);
		i++;
	}
	return (sign * res);
}
