/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 22:21:39 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/10 22:57:46 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *src)
{
	char	*new;
	int		sz;

	sz = 0;
	while (src[sz++])
		;
	if (!(new = (char *)malloc(sizeof(char) * (sz + 1))))
		return (NULL);
	new[++sz] = '\0';
	while (new[--sz])
		new[sz] = src[sz];
	return (new);
}
