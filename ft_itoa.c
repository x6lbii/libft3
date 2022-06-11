/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 03:17:04 by saealzaa          #+#    #+#             */
/*   Updated: 2022/06/07 05:09:19 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int number)
{
	int	i;

	i = 0;
	if (number == 0)
	{
		return (1);
	}
	while (number)
	{
		i++;
		number = number / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	char			*s;
	size_t			len;

	len = count(n);
	number = n;
	if (n < 0)
	{
		number = (-1 * n);
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	s[len] = '\0';
	if (number == 0)
		s[--len] = 0 + '0';
	while (number)
	{
		s[--len] = number % 10 + '0';
		number = number / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
// int main()
// {
// 	int a = -4736251;
// 	char *s = ft_itoa(a);
// 	printf("%s\n", s);
// }
