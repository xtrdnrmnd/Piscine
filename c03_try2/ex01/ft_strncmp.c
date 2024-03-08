/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:22:45 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/27 18:34:21 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	if (s2[a] == '\0' || a == n)
		return (0);
	else
		return (-s2[a]);
}

/*int main(void)
{
	char a[] = "sjz";
	char b[] = "sjz";
	int c = ft_strncmp(a, b, 3);
	printf("%d", c);
}*/
