#include<stdio.h> 

int findElement(int array[], int size, int keyToBeDeleted){ 
	int i; 
	// Finding & returning the position of the element 
	for (i = 0; i < size; i++) 
		if (array[i] == keyToBeDeleted)
			return i; 
	return - 1;
}

int deleteElement(int array[], int size, int keyToBeDeleted){
	int pos = findElement(array, size, keyToBeDeleted); 
	// If element is not found then it prints Element not found
	if (pos == - 1) { 
		printf("Element not found\n"); 
		return size; 
	} 
	// Otherwise it deletes the element & moves rest of the element by one position
	int i; 
	for (i = pos; i < size - 1; i++) 
		array[i] = array[i + 1]; 
	return size - 1; 
}
 
int main() { 
	int array[100000];
	int input, j;
	
	printf("Enter number of digit to be input: ");
	scanf("%d",&input);
	
	for(j = 0 ; j < input ; j++){
		printf("Enter the %d number: ",j+1);
		scanf("%d",&array[j]);
	}
	
	printf("\n\n");
	int i, keyToBeDeleted;
	printf("Enter Number to be deleted: ");
	scanf("%d",&keyToBeDeleted); 
	
	printf("Before Deletion: ");
	for (i = 0; i < input; i++) 
		printf("  %d", array[i]);
	printf("\n\n");
	
	int size = deleteElement(array, input, keyToBeDeleted); 
	printf("After Deletion: "); 
	for (i = 0; i < size; i++) 
		printf("  %d",array[i]);
	
	return 0; 
}
