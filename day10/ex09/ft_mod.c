/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:40:07 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/16 20:40:08 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_mod(int x, int y)
{
	if (y == 0)
		return (0);
	return (x % y);
}