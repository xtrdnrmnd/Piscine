/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:11:39 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 13:28:41 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 32 || str[a] > 126)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int main(void)
{
	char str[] = "\n";
	int a = ft_str_is_printable(str);
	printf("%d", a);
}*/
