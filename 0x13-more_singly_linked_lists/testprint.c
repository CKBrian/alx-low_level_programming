#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *temp = head, *fast = head, *slow = head, *temp2 = head;
    size_t nodes = 0, is_loop = 0, loop = 0;

    if (head == NULL)
        return (nodes);
    
    while (temp != NULL)
    {
        if (loop == 0 && fast != NULL && temp2->next != NULL)
        {
            if (is_loop == 1)
            {
                temp2 = fast;
                fast = fast->next;
                slow = slow->next;
            }
            else
            {
                fast = fast->next->next;
                slow = slow->next;
            }

            if (fast == slow)
            {
                if (is_loop == 1)
                {
                    loop = 1;
                    break; 
                }
                else
                {
                    is_loop = 1;
                    slow = head;
                }
            }
        }
        else
        {
            printf("[%p] %d\n", (void *)temp, temp->n);
            temp = temp->next;

            if (temp == temp2) 
            {
                printf("[%p] %d\n", (void *)temp, temp->n);
                printf("-> [%p] %d\n", (void *)temp, temp->n);
                nodes++;
                break;
            }
        }
    }

    return (nodes);
}

