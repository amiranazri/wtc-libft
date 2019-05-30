/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:33:59 by anazri            #+#    #+#             */
/*   Updated: 2019/05/29 13:23:48 by anazri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	while ((s2[i] != '\0') && (i < n))
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}

int main () 
{
	char src[50], dest[50];
	
	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");
	ft_strncat(dest, src, 15);
	printf("Final destination string : |%s|", dest);
	
	return(0);
}