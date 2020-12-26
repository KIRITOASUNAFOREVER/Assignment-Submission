#include <stdio.h>

void leftRotate(int arr[], int k, int n){
    int mod = k % n;
    printf("Output After %d Left Rotation is: ",k);
    for (int i = 0; i < n; i++){
    	printf("%d ",arr[(mod + i) % n]);
	}
    printf("\n");
}

int main()
{
    int array[100000];
    int input,j;
    printf("Enter number of digit to be input: ");
	scanf("%d",&input);
	
	for(j = 0 ; j < input ; j++){
		printf("Enter the %d number: ",j+1);
		scanf("%d",&array[j]);
	}

    int k;
    printf("Input How many time you want to Left Rotate the Array? : ");
    scanf("%d",&k);
    printf("Before Left Rotation (Original): ");
	for (int i = 0; i < input; i++){
    	printf("%d ",array[i]);
	}
	printf("\n");
    leftRotate(array, k, input);
    return 0;
}
