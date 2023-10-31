/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:50:29 by dschuck-          #+#    #+#             */
/*   Updated: 2023/10/31 14:50:35 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*res;
	size_t	x;

	x = elementSize * elementCount;
	res = malloc(x);
	if (res != NULL)
		ft_memset(res, 0, x);
	return (res);
}
