/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isplwspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:32:33 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/16 13:34:42 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isplwspace(char c)
{
	return (c == '\v' || c == '\f' || c == '\r');
}
