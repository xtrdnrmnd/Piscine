/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:05:26 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/27 18:24:19 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a])
	{
		if (s1[a] && s2[a])
		{
			if (s1[a] > s2[a])
				return (1);
			if (s1[a] < s2[a])
				return (-1);
			a++;
		}
		else
			return (1);
	}
	if (s2[a])
		return (-1);
	return (0);
}

/*int main(void)
{
	char a[] = "sjr";
	char b[] = "sjh";
	int c = ft_strcmp(a, b);
	printf("%d", c);
}*/
