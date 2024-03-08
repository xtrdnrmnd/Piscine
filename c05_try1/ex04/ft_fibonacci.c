/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:40:50 by ppichler          #+#    #+#             */
/*   Updated: 2024/03/06 19:09:54 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	else
	{
		if (index == 1 || index == 2)
			return (1);
		if (index == 0)
			return (0);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (res);
}

/*int main()
{
	int a = ft_fibonacci(6);
	printf("%d", a);
}*/
