/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:45:58 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/10 17:03:33 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *memptr, int val, size_t num)
{
	char	*ptr;

	ptr = memptr;
	while (num-- > 0)
		*ptr++ = val;
	return (memptr);
}
