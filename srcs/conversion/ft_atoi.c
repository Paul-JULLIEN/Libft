/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 17:04:05 by pauljull          #+#    #+#             */
/*   Updated: 2020/07/03 14:22:26 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(const char *str)
{
	long	atoi;
	char	sign;

	atoi = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\t'
	|| *str == '\n' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = (atoi * 10) + (*str - '0');
		str++;
	}
	return (atoi * sign);
}
