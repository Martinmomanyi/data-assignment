#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end of the list
void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Merge two sorted linked lists
Node* mergeSortedLists(Node* list1, Node* list2) {
    // If one list is empty, return the other
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    
    Node* mergedList = NULL;
    Node* current;
    
    // Determine the head of the merged list
    if (list1->data <= list2->data) {
        mergedList = list1;
        list1 = list1->next;
    } else {
        mergedList = list2;
        list2 = list2->next;
    }
    
    current = mergedList;
    
    // Merge remaining nodes
    while (list1 && list2) {
        if (list1->data <= list2->data) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }
    
    // Attach any remaining nodes
    if (list1) current->next = list1;
    if (list2) current->next = list2;
    
    return mergedList;
}

// Print linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Free allocated memory
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node *list1 = NULL, *list2 = NULL, *mergedList;
    
    // Example sorted lists
    insertNode(&list1, 1);
    insertNode(&list1, 3);
    insertNode(&list1, 5);
    
    insertNode(&list2, 2);
    insertNode(&list2, 4);
    insertNode(&list2, 6);
    
    printf("List 1: ");
    printList(list1);
    
    printf("List 2: ");
    printList(list2);
    
    mergedList = mergeSortedLists(list1, list2);
    
    printf("Merged List: ");
    printList(mergedList);
    
    // Free memory
    freeList(mergedList);
    
    return 0;
}
