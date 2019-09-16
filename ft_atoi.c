/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:06:39 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/16 14:07:07 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		sign;

	while (ft_isallwspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		*str == '-' ? sign = 1 : 0;
		str++;
	}
	while (*str && ft_isdigit(*str))
		res = res * 10 + (*str++ - '0');
	return ((sign == 1) ? (-res) : (res));
}
