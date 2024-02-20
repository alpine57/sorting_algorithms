#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list) {
    if (list == NULL || *list == NULL || (*list)->next == NULL) {
        return;
    }

    listint_t *current = (*list)->next;
    listint_t *prev, *next;

    while (current != NULL) {
        prev = current->prev;
        next = current->next;

        while (prev != NULL && prev->n > current->n) {
            if (next != NULL) {
                next->prev = prev;
            }
            prev->next = next;
            current->prev = prev->prev;
            prev->prev = current;
            current->next = prev;

            if (current->prev != NULL) {
                current->prev->next = current;
            } else {
                *list = current;
            }

            print_list(*list);

            prev = current->prev;
        }

        current = next;
    }
}

