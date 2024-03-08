/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:34:53 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 09:37:33 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 64 && str[a] < 91)
			str[a] += 32;
		a++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "AZ";
	char *a = ft_strlowcase(str);
	printf("%s", a);
}*/
