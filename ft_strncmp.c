/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:24:13 by dschuck-          #+#    #+#             */
/*   Updated: 2023/10/31 15:24:17 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
