/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:04:13 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/26 18:05:23 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] < 65 || str[a] > 122 || (str[a] > 90 && str[a] < 97))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/*int main(void)
{
	char str[] = "sffge";
	int a = ft_str_is_alpha(str);
	printf("%d", a);
}*/
