/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skushnir <skushnir@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 11:12:41 by skushnir          #+#    #+#             */
/*   Updated: 2017/11/05 11:06:40 by skushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') ||
		(i >= '0' && i <= '9') || (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}
