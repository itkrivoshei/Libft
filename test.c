/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:40:04 by jstaunto          #+#    #+#             */
/*   Updated: 2019/09/10 17:37:08 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	ft_putchar('f');
	ft_putstr("hello");
	ft_putnbr_fd(248, 1);
	ft_putnbr(999);
	ft_putendl_fd("hello", 1);
	ft_putendl("heheh");
	ft_putstr(ft_itoa(10));
	ft_putstr(ft_memset("asdasdas", 3));
	return (0);
}
