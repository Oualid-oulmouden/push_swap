/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_value_in_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:54:09 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/25 11:08:09 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_stack_b(t_list *head)
{
    t_list *aid ;
    aid = malloc(sizeof(t_list));
    if(head == NULL || head->next == NULL)
    {
        return;
    }
    t_list *t ;
    t = head->next;
    aid->content = head->content;
    head->content = t->content;
    t->content = aid->content;
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

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    printf("---------befor swap --------------\n");
    printf("%d\n",node1->content);
    printf("%d\n",node2->content);
    printf("%d\n",node3->content);
    printf("---------after swap --------------\n");
    swap_stack_b(node1);
    printf("%d\n",node1->content);
    printf("%d\n",node2->content);
    printf("%d\n",node3->content);
}