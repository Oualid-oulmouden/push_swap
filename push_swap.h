/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:59:43 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/01/26 17:33:49 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct s_list {
    int content;
    void *next;
}t_list;

void swap_stack_a(t_list *head);
void swap_stack_b(t_list *head);
void swap_stack_ab(t_list *head1, t_list *head2);
void push_to_a(t_list **head1,t_list **head2);
void push_to_b(t_list **head_a, t_list **head_b);

#endif
