/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:47:06 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/28 20:06:14 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		b;
	char	*pointer;

	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			b = 0;
			pointer = str;
			while (*to_find)
			{
				if (*pointer != *to_find)
					b = 1;
				pointer++;
				to_find++;
			}
			if (b == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*int main(void)
{
    char *str1 = "Hello world";
    char *str2 = "o wo";
    printf("%s\n", ft_strstr(str1, str2));
    printf("%s\n", strstr(str1, str2));
}*/
