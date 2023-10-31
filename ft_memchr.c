/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:58 by dschuck-          #+#    #+#             */
/*   Updated: 2023/10/31 14:56:09 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*st;
	size_t			i;

	x = (unsigned char) c;
	st = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (st[i] == x)
			return ((void *)(& st[i]));
		i++;
	}
	return (NULL);
}
