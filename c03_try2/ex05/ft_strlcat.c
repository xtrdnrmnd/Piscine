/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:05:14 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/28 18:37:51 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_s;
	unsigned int	src_s;
	unsigned int	res;
	unsigned int	a;

	dest_s = 0;
	src_s = 0;
	a = 0;
	while (dest[dest_s])
		dest_s++;
	while (src[src_s])
		src_s++;
	res = src_s + dest_s;
	if (size <= dest_s)
		return (res);
	while (src[src_s] && dest_s + 1 < size)
	{
		dest[dest_s] = src[a];
		dest_s++;
		a++;
	}
	dest[dest_s] = '\0';
	return (res);
}

/*int main(void)
{
	char a[] = "World";
	char b[100] = "hello, ";
	int c = ft_strlcat(b, a, 3);
	printf("%s", b);
	printf("%d", c);
}*/
