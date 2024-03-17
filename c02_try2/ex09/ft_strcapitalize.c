/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:38:33 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 10:09:17 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	checker(char letter)
{
	if (letter > 64 && letter < 91)
		return ('c');
	if (letter > 96 && letter < 123)
		return ('l');
	if (letter > 47 && letter < 58)
		return ('n');
	else
		return ('o');
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (checker(str[a]) == 'c')
		{
			if (a != 0 && checker(str[a - 1] == 'c'))
				str[a] += 32;
		}
		if (checker(str[a]) == 'l')
		{
			if (a == 0)
				str[a] -= 32;
			else
			{
				if (checker(str[a - 1]) == 'o')
					str[a] -= 32;
			}
		}
		a++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "sALut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *a = ft_strcapitalize(str);
	printf("%s", a);
}*/
