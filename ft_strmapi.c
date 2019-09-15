/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 22:58:06 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/14 11:46:07 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh;
	size_t	i;

	if (!(fresh = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (*(s + ++i))
		*(fresh + i) = f(i, *(s + i));
	return (fresh);
}
