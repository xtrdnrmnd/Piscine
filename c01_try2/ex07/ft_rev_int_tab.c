/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:52:51 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/24 09:52:56 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	filler;

	a = 0;
	filler = 0;
	while (a < (size / 2))
	{
		filler = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = filler;
		a++;
	}
}

/*int main(void)
{
	int de[] = {2, 1, 7, 3};
	ft_rev_int_tab(de, 4);
	for (int i=0; i< 4; i++)
			printf("%d", de[i]);
}*/
