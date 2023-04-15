/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:01:49 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 18:08:54 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		s_len;
	const char	*src;
	char		*dst;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start > s_len)
		start = s_len;
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr != NULL)
	{
		src = s + start;
		dst = substr;
		while (*src != '\0' && len > 0)
		{
			*dst++ = *src++;
			len--;
		}
		*dst = '\0';
	}
	return (substr);
}
