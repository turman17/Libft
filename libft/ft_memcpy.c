/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:00:50 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 19:13:17 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*char_dest;
	char		*char_src;

	i = -1;
	if (!dest && !src)
		return (NULL);
	char_dest = (char *)dest;
	char_src = (char *)src;
	while (++i < n)
		char_dest[i] = char_src[i];
	return (dest);
}
