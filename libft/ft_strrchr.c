/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:36:22 by rpinoit           #+#    #+#             */
/*   Updated: 2017/11/16 18:34:23 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = 1;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i)
	{
		if (*s == (char)c)
			return ((char*)s);
		s--;
		i--;
	}
	return (NULL);
}
