/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:28:17 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/11 22:43:05 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t sz)
{
	void	*mem;

	if (!(mem = malloc(sz)))
		return (NULL);
	ft_bzero(mem, sz);
	return (mem);
}
