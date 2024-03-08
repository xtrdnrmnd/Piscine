/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppichler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 10:27:48 by ppichler          #+#    #+#             */
/*   Updated: 2024/02/25 11:42:46 by ppichler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	hexdec_str(unsigned char str)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[str / 16], 1);
	write(1, &hex[str % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 31 && str[a] < 127)
			write(1, &str[a], 1);
		else
			hexdec_str(str[a]);
		a++;
	}
}

/*int main(void)
{
	char *str = "\a\b\t\n\v\f\r !|\"[]";
	ft_putstr_non_printable(str);
}*/
