/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:42:09 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/24 13:08:01 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 48 || str[a] > 57)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int main(void)
{
	char str[] = "/";
	int a = ft_str_is_numeric(str);
	printf("%d", a);
}*/
