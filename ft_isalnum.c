/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:48:49 by anazri            #+#    #+#             */
/*   Updated: 2019/05/21 13:05:06 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	if ((c >= 65) && (c <= 90) && \
				(c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	if (ft_isdigit(c))
		return (1);
	else
		return (0);
}

int		main(void)
{
	int n;

	n = 18;
	printf("%d", ft_isalnum(n));
}