/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:54:18 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 09:16:00 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 97 || str[a] > 122)
			return (0);
		a++;
	}
	return (1);
}

/*int main(void)
{
	char str[] = "dfds";
	int a = ft_str_is_lowercase(str);
	printf("%d", a);
}*/
