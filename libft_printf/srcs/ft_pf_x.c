/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 01:47:01 by apergens          #+#    #+#             */
/*   Updated: 2014/03/18 12:41:58 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

char	*ft_pf_x(va_list ap, char *opts, int *ret)
{
	char	*str;
	int		on;

	if (opts == NULL)
		return (ft_strnew(0));
	on = 0;
	if (*opts == 'X')
		on = 1;
	str = ft_xtoa(va_arg(ap, int), on);
	*ret = ft_strlen(str);
	return (str);
}
