/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtryason <vtryason@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:10:44 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 20:00:04 by vtryason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = -1;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[++i])
	{
		str[i] = f(i, s[i]);
	}
	return (str);
}
