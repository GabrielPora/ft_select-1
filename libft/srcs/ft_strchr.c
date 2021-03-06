/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 00:30:43 by apergens          #+#    #+#             */
/*   Updated: 2014/03/27 18:22:13 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (*(s + (++i - 1)))
	{
		if (*(s + (i - 1)) == c)
			return ((char *)s + (i - 1));
	}
	if (*(s + (i - 1)) == c)
		return ((char *)s + (i - 1));
	return (NULL);
}
