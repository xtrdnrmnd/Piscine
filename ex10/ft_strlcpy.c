/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:18:11 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/26 18:21:15 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len); 
	while ((i < (size - 1)) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*int main(void)
{
	char str[] = "skdsldls";
	char str2[] = "sddf";
	int a = ft_strlcpy(str2, str, 4);
	printf("%d", a);
	printf("%s", str2);
}*/
