/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:33:16 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/27 14:12:30 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_b(t_list **head_a, t_list **head_b)
{
    if(head_a == NULL)
    {
        return;
    }
    t_list *aid_a;
    t_list *temp = (*head_a);
    
    aid_a = (*head_a)->next;
    (*head_a) = aid_a;
    
    temp->next = *head_b;
    *head_b = temp;
}

int main()
{
    t_list *node_a1;
    node_a1 = malloc(sizeof(t_list));
    node_a1->content = 1;
    t_list *node_a2;
    node_a2 = malloc(sizeof(t_list));
    node_a2->content = 2;
    t_list *node_a3;
    node_a3 = malloc(sizeof(t_list));
    node_a3->content = 3;

    node_a1->next = node_a2;
    node_a2->next = node_a3;
    node_a3->next = NULL;

    t_list *node1;
    node1 = malloc(sizeof(t_list));
    node1->content = 4;
    t_list *node2;
    node2 = malloc(sizeof(t_list));
    node2->content = 5;
    t_list *node3;
    node3 = malloc(sizeof(t_list));
    node3->content = 6;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    // printf("--------------befor push -----------------------\n");
    // printf("--------------stack_a-----------------------\n");

    //  while (node_a1) 
    // {
    //     printf("%d\n",node_a1->content);
    //     node_a1 = node_a1->next;
    // }
    // printf("--------------stack_b-----------------------\n");

    // while (node1) 
    // {
    //     printf("%d\n",node1->content);
    //     node1 = node1->next;
    // }
    // printf("--------------after push --------------\n");
    push_to_b(&node_a1, &node1);
    printf("--------------stack_a-----------------------\n");
    while (node_a1) 
    {
        printf("%d\n",node_a1->content);
        node_a1 = node_a1->next;
    }
    printf("--------------stack_b-----------------------\n");
    while (node1) 
    {
        printf("%d\n",node1->content);
        node1 = node1->next;
    }
}