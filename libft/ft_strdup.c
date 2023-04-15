/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:01:06 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/11 14:45:42 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*p;
	size_t		len;
	const char	*q;
	char		*r;

	len = 0;
	q = s;
	while (*q != '\0')
	{
		len++;
		q++;
	}
	len++;
	p = (char *)malloc(len * sizeof(char));
	if (p != NULL)
	{
		r = p;
		while (*s != '\0')
		{
			*r++ = *s++;
		}
		*r = '\0';
	}
	return (p);
}
