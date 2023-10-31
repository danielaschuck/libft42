/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:27:06 by dschuck-          #+#    #+#             */
/*   Updated: 2023/10/31 15:27:09 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (lil[0] == '\0')
		return ((char *) big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == lil[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && lil[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (lil[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
