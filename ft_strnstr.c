/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:20:37 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/15 23:00:42 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t p1;
	size_t p2;

	if (*needle == '\0')
		return ((char *)haystack);
	p1 = 0;
	while (haystack[p1] != '\0' && p1 < len)
	{
		if (haystack[p1] == needle[0])
		{
			p2 = 1;
			while (needle[p2] != '\0' && haystack[p1 + p2] == needle[p2] &&
					p1 + p2 < len)
				p2++;
			if (needle[p2] == '\0')
				return ((char*)&haystack[p1]);
		}
		p1++;
	}
	return (NULL);
}
