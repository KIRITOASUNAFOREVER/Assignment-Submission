#include<stdio.h>
#include<stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 
 
int size = 0;
Node* getNode(int data) { 
    Node* newNode = new Node();
    newNode->data = data; 
    newNode->next = NULL; 
    return newNode; 
} 
  
void insert_any(Node** current, int pos, int data) { 
    if (pos < 0 || pos > size + 1) 
        printf("Invalid Position!\n"); 
    else { 
        while (pos--) { 
            if (pos == 0) { 
                Node* temp = getNode(data);  
                temp->next = *current; 
                *current = temp; 
            } 
            else  
              current = &(*current)->next; 
        } 
        size++; 
    } 
} 
  
void printList(struct Node* head) { 
    while (head != NULL) { 
        printf(" %d",head->data); 
        head = head->next; 
    } 
    printf("\n");
} 
   
int main() { 
    Node* head = NULL; 
    head = getNode(2); 
    head->next = getNode(4); 
    head->next->next = getNode(6); 
    head->next->next->next = getNode(8); 
    size = 4; 
  
    printf("Linked list before insertion: "); 
    printList(head); 
    
    int totalInsert, i, data, pos;
    printf("How Many Time You want to insert? : ");
    scanf("%d",&totalInsert);
    printf("\n");
    for(i = 0; i < totalInsert; i++){
    	printf("Enter Number Value you want to input : ");
    	scanf("%d",&data);
    	printf("Where is the position you want to insert (Started from Index 0) : ");
    	scanf("%d",&pos);
    	insert_any(&head, pos+1, data); 
    	printf("Linked list after insertion of %d at position %d: ",data,pos); 
    	printList(head); 
    	printf("\n");printf("\n");
	}
    return 0; 
} 
