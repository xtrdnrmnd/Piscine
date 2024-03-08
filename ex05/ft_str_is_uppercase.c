/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:09:02 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 09:20:45 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 65 || str[a] > 90)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int main(void)
{
	char str[] = "d";
	int a = ft_str_is_uppercase(str);
	printf("%d", a);
}*/
