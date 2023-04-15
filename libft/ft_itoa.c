/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viktortr <viktortr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:32:34 by viktortr          #+#    #+#             */
/*   Updated: 2023/04/14 16:03:05 by viktortr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(long num)
{
	int	len;

	len = 0;
	if (num == 0)
		len = 1;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

void	ft_converter(char *str, int len, long num)
{
	while (num > 0)
	{
		str[len] = 48 + (num % 10);
		num /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = ft_len(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len--] = 0;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
	{
		str[0] = 48;
		return (str);
	}
	ft_converter(str, len, num);
	return (str);
}
