/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:52:06 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/15 12:40:53 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const *new;

	if (!s)
		return (NULL);
	while (ft_iswspace(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	new = s + ft_strlen(s) - 1;
	while (ft_iswspace(*new))
		new--;
	return (ft_strsub(s, 0, new - s + 1));
}
