#include <stdio.h> 

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        } 
        arr[j + 1] = key;
    } 
} 

void printArray(int arr[], int n){
    int i; 
    for (i = 0; i < n; i++) 
        printf(" %d", arr[i]); 
    printf("\n"); 
} 

int main(){ 
    int arr[10000]; 
    int n, i, j;
    
    printf("Input total number input to Array: ");
    scanf("%d",&n);
    
    for(i = 0 ; i < n ; i++){
    	printf("Input The %d number: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n");
	printf("Array Before Sorted:");
	printArray(arr, n);
    
    printf("\n\n");
	insertionSort(arr, n);
    printf("Array After Sorted:");
    printArray(arr, n); 

    return 0; 
}
