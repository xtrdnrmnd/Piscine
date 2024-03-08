/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:18:52 by ppichler          #+#    #+#             */
/*   Updated: 2024/03/05 18:15:52 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	logic(char *str)
{
	int	a;

	a = 0;
	while (str[a] == '\v' || str[a] == '\f' || str[a] == '\r'
		|| str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
		a++;
	return (a);
}

int	ft_atoi(char *str)
{
	int	a;
	int	res;
	int	zeich;

	a = 0;
	res = 0;
	zeich = 1;
	while (str[a])
	{
		a = logic(str);
		while (str[a] == '-' || str[a] == '+')
		{
			if (str[a] == '-')
				zeich *= -1;
			a++;
		}
		while (str[a] > 47 && str[a] < 58)
		{
			res = res * 10 + (str[a] - 48);
			a++;
		}
		return (res * zeich);
	}
	return (res);
}

/*int main()
{
    char *a = "---121";
    int b = ft_atoi(a);
    printf("%d", b);
}*/
