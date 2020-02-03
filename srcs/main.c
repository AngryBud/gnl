/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrybud <angrybud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:50:22 by angrybud          #+#    #+#             */
/*   Updated: 2020/02/03 18:15:29 by angrybud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{
	//char ret[] = "clement";
	//int number = 15;
	
	//ft_printf("bonjour a tous \n");
	ft_printf("bonjour a tous \n");
	ft_printf("alors ? %-d\n", 476);
	//printf("%-10.6d\n", 20);
	//printf("%-10d \n", number);
    //printf("%010d \n", number);
	return (0);
}
/*
int main(void)
{

    printf("printf |   %-d|%-8.6d|\n", 1025, -1025);

    printf("   printf |%-15d|\n", 7);

    printf("|%-20.8d|\n", 15);

    printf("   printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012);

    printf("   printf |%-*d|%-*d|\n",  5, 10012, 5, -10012);
    return (0);
}*/