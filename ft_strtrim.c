/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschuck- <dschuck-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:31:25 by dschuck-          #+#    #+#             */
/*   Updated: 2023/10/31 15:33:00 by dschuck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *search, const char *s)
{
	size_t	x;

	x = 0;
	if (!search || !s)
		return (0);
	while (*search && ft_strchr(s, *search))
		search++;
	x = ft_strlen(search);
	while (x && ft_strrchr(s, search[x]))
		x--;
	return (ft_substr(search, 0, x + 1));
}
