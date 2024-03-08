/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:12:51 by ppichler          #+#    #+#             */
/*   Updated: 2024/03/05 19:52:37 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	kor;

	kor = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (kor <= nb / 2)
	{
		if (nb == (kor * kor))
			return (kor);
		kor++;
	}
	return (0);
}

/*int	main(void)
{
	int a = ft_sqrt(16);
	printf("%d", a);
}*/
