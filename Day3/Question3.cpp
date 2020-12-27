#include<stdio.h>
#include<stdlib.h>

struct Node { 
    int data; 
    struct Node* next; 
}; 

Node* delete_end(struct Node* head){ 
    if (head == NULL) 
        return NULL; 
  
    if (head->next == NULL) { 
        delete head; 
        return NULL; 
    } 

    Node* second_last = head; 
    while (second_last->next->next != NULL) 
        second_last = second_last->next; 

    delete (second_last->next); 
    second_last->next = NULL; 
    return head; 
} 

void push(struct Node** head_ref, int new_data){ 
    struct Node* new_node = new Node; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
 
int main(){
    Node* head = NULL; 
    push(&head, 2); 
    push(&head, 4); 
    push(&head, 6); 
    push(&head, 8); 
    push(&head, 10); 
    
    printf("First Example: \n");
    printf("Before Delete Last of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
		printf("%d ",temp->data); 
    printf("\n");
	head = delete_end(head); 
    printf("After Delete Last of Linked List: ");
	for (Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d ",temp->data); 
    printf("\n\n");
    
    printf("Second Example: \n");
    printf("Before Delete Last of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
		printf("%d ",temp->data); 
    printf("\n");
	head = delete_end(head); 
    printf("After Delete Last of Linked List: ");
	for (Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d ",temp->data); 
    printf("\n\n");
    
    printf("Third Example: \n");
    printf("Before Delete Last of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
		printf("%d ",temp->data); 
    printf("\n");
	head = delete_end(head); 
    printf("After Delete Last of Linked List: ");
	for (Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d ",temp->data); 
    printf("\n\n");
    return 0; 
} 
