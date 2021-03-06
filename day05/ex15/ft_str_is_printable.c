/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aljacque <aljacque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:47:15 by aljacque          #+#    #+#             */
/*   Updated: 2018/09/07 16:09:11 by aljacque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 0 && str[j] <= 31) || str[j] == 127)
			return (0);
		j++;
	}
	return (1);
}
