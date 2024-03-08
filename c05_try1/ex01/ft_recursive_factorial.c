/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:09:09 by ppichler          #+#    #+#             */
/*   Updated: 2024/03/06 18:15:53 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	else
		return (res);
}

/*int main(void)
{
    int a = 4;
    int f = ft_recursive_factorial(a);
    printf("%d", f);
}*/
