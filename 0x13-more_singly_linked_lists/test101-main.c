#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head, *node;
    int i;

    /* Edge case 1: Empty list 
    head = NULL
    printf("Edge case 1: Empty list\n");
    print_listint_safe(head);*/
    printf("-----------------\n");

    /* Edge case 2: List with a single node */
    head = NULL;
    node = add_nodeint(&head, 0);
    printf("Edge case 2: List with a single node\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 3: List with multiple nodes and no loop */
    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    printf("Edge case 3: List with multiple nodes and no loop\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 4: List with a loop */
    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    node->next = head; /* Create a loop*/
    printf("Edge case 4: List with a loop\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 5: List with a small loop */
    head = NULL;
    add_nodeint(&head, 0);
    node = add_nodeint(&head, 1);
    node->next = head; /*  Create a small loop*/
    printf("Edge case 5: List with a small loop\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 6: Large list with a loop */
    head = NULL;
    for (i = 0; i < 10000; i++)
        add_nodeint(&head, i);
    node = head;
    while (node->next != NULL)
        node = node->next;
    node->next = head; /*  Create a loop*/
    printf("Edge case 6: Large list with a loop\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 7: List with self-loop */
    head = NULL;
    node = add_nodeint(&head, 0);
    node->next = node; /*  Create a self-loop*/
    printf("Edge case 7: List with self-loop\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 8: List with a loop at the end */
    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    node = head;
    while (node->next != NULL)
        node = node->next;
    node->next = head->next; /*  Create a loop at the end*/
    printf("Edge case 8: List with a loop at the end\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 9: List with a loop in the middle */
    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    node = add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    node->next = head->next; /*  Create a loop in the middle*/
    printf("Edge case 9: List with a loop in the middle\n");
    print_listint_safe(head);
    printf("-----------------\n");

    /* Edge case 10: List with multiple loops */
    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    node = head;
    while (node->next != NULL)
        node = node->next;
    node->next = head; /*  Create a loop at the end*/
    node = head->next;
    while (node->next != NULL)
        node = node->next;
    node->next = head->next; /*  Create a loop in the middle*/
    printf("Edge case 10: List with multiple loops\n");
    print_listint_safe(head);
    printf("-----------------\n");

    return (0);
}

