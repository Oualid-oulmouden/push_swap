/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retation_elements_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:44:06 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/27 15:04:15 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

t_list *retation_elements_a(t_list **head)
{
    
    t_list *temp;
    temp = *head;
    while ((*head)->next != NULL)
    {
        (*head) = (*head)->next;
    }
    
    t_list **var;
    *var = *head;
    (*var)->next = temp;
    return (*var);
}

int main()
{
    t_list *node1;
    node1 = malloc(sizeof(t_list));
    node1->content = 1;
    t_list *node2;
    node2 = malloc(sizeof(t_list));
    node2->content = 2;
    t_list *node3;
    node3 = malloc(sizeof(t_list));
    node3->content = 3;
    t_list *node4;
    node4 = malloc(sizeof(t_list));
    node4->content = 4;
    t_list *node5;
    node5 = malloc(sizeof(t_list));
    node5->content = 5;
    t_list *node6;
    node6 = malloc(sizeof(t_list));
    node6->content = 6;


    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = NULL;
    
    retation_elements_a(&node1);
    printf("%d\n",node1->content); //6
    printf("%d\n",node2->content); //1
    printf("%d\n",node3->content); //2
    printf("%d\n",node4->content); //3
    printf("%d\n",node5->content); //4
    printf("%d\n",node6->content); //5
}