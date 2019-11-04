/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeroua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 01:58:56 by aazeroua          #+#    #+#             */
/*   Updated: 2019/05/08 18:02:55 by aazeroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int		ft_abs(int n)
{
	int sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	else
		return (n);
	return (n * sign);
}

int main()
{
	int a = -2;

	printf("%d", ft_abs(a));
	return (0);
}
