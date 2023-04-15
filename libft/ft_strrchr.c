/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:01:44 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 19:09:05 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c1;
	int				len;

	len = ft_strlen(s);
	c1 = c;
	while (len >= 0)
	{
		if (s[len] != c1)
			len--;
		else if (s[len] == c1)
			return ((char *)s + len);
	}
	return (NULL);
}
