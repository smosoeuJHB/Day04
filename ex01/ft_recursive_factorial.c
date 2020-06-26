/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:01:25 by smosoeu           #+#    #+#             */
/*   Updated: 2020/06/26 09:29:20 by smosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int ft_recursive_factorial(int nb);
{


	if (nb >= 1)

	return nb * ft_recursive_factorial(nb -1); 

	if (nb == 0)
		return 1; 
	return 0;
}


