/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:01:26 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 14:05:39 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(src);
	if (size)
	{
		while (src[++i] && i < size - 1)
			dst[i] = src[i];
		dst[i] = 0;
	}
	return (len);
}
