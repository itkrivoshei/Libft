/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:06:39 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/19 17:39:04 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				i;
	long long		res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isallwspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		str[i++] == '-' ? sign = -1 : 0;
	while (ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - 48);
	return (sign * res);
}
