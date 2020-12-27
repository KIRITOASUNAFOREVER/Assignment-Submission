#include<stdio.h>
#include<stdlib.h>

struct Node { 
    int data; 
    struct Node* next; 
}; 
  
Node* delete_beg(struct Node* head) { 
    if (head == NULL) 
        return NULL; 
    Node* temp = head; 
    head = head->next; 
  
    delete temp; 
    return head; 
} 

void push(struct Node** head_ref, int new_data) {
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
    printf("Before Delete Beginning of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
		printf("%d ",temp->data); 
    printf("\n");
	head = delete_beg(head);
    printf("After Delete Beginning of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d ",temp->data); 
    printf("\n\n");
    
	printf("Second Example: \n");
	printf("Before Delete Beginning of Linked List: ");
	for (Node* temp = head; temp != NULL; temp = temp->next) 
		printf("%d ",temp->data); 
    printf("\n");
	head = delete_beg(head);
    printf("After Delete Beginning of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d ",temp->data); 
	printf("\n\n");
	
	printf("Third Example: \n");
	printf("Before Delete Beginning of Linked List: ");
	for (Node* temp = head; temp != NULL; temp = temp->next) 
		printf("%d ",temp->data); 
    printf("\n");
	head = delete_beg(head);
    printf("After Delete Beginning of Linked List: ");
    for (Node* temp = head; temp != NULL; temp = temp->next) 
        printf("%d ",temp->data); 
	
	return 0; 
} 
