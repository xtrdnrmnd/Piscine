/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:25:11 by ppichler          #+#    #+#             */
/*   Updated: 2024/03/06 18:08:38 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		while (nb > 1)
		{
			nb--;
			result *= nb;
		}
	}
	return (result);
}

/*int	main(void)
{
	int a = ft_iterative_factorial(345);
	printf("%d", a);
}*/
