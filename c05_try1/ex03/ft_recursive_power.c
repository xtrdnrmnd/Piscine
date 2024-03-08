/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:44:50 by ppichler          #+#    #+#             */
/*   Updated: 2024/03/06 19:07:40 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}

/*int main(void)
{
    int p = ft_recursive_power(2, 6);
    printf("%d", p);
*/
