/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:21:39 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/11 12:39:06 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *src)
{
	char	*new;
	int		sz;

	sz = 0;
	while (src[sz])
		++sz;
	if (!(new = (char *)malloc(sizeof(char) * (sz + 1))))
		return (NULL);
	new[sz] = '\0';
	while (src[--sz])
		new[sz] = src[sz];
	return (new);
}
