/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:14:37 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 09:34:11 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 96 && str[a] < 123)
			str[a] -= 32;
		a++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "az";
	char *a = ft_strupcase(str);
	printf("%s", a);
}*/
