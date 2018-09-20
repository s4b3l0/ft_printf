/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:36:58 by sankosi           #+#    #+#             */
/*   Updated: 2018/06/25 15:34:20 by sankosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_atoi(const char *c)
{
	int num;
	int i;

	num = 0;
	i = 1;
	while (ft_isspace(*c) != 0)
		c++;
	if (*c == '-' || *c == '+')
	{
		if (*c == '-')
			i *= -1;
		c++;
	}
	while ((*c != '\0') && (ft_isdigit(*c) != 0))
	{
		num *= 10;
		num = num + (*c - '0');
		c++;
	}
	return (num * i);
}
