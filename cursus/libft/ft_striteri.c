/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparedes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:18:51 by mparedes          #+#    #+#             */
/*   Updated: 2022/10/25 17:18:53 by mparedes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t  i;

    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
