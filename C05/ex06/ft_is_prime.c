/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 08:40:55 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/15 20:06:14 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while ((nb % i != 0) && i < nb)
	{
		i++;
		if (i == nb)
			return (1);
	}
	return (0);
}
