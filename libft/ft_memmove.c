/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:00:54 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 18:06:04 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (s < d && s + n > d)
	{
		s += n;
		d += n;
		while (n-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	else
	{
		while (n-- > 0)
		{
			*(d++) = *(s++);
		}
	}
	return (dest);
}
