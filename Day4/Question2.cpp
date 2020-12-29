#include <stdio.h>

int ternarySearch(int l, int r, int key, int ar[]){
    while (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
 
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
 
        if (key < ar[mid1]) {
            r = mid1 - 1;
        }
        else if (key > ar[mid2]) {
            l = mid2 + 1;
        }
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}

int main(){
    int l, r, p, key;
    int ar[10000];
    int total, i, totalFind, j;
    
    printf("Total Number Input to Array : ");
    scanf("%d",&total);
    
    for(i = 0 ; i < total ; i++){
    	printf("Enter Number %d: ",i+1);
    	scanf("%d",&ar[i]);
	}
	
    l = 0;
    r = total - 1;
    printf("\n\n");
    printf("Input How Many Times you want to search Number? : ");
    scanf("%d",&totalFind);
    printf("\n");
    for(j = 0 ; j < totalFind ; j++){
    	printf("Enter number to be find : ");
		scanf("%d",&key);
		p = ternarySearch(l, r, key, ar);
		if(p >= 0){
			printf("%d is found at Index %d\n", key, p);
		}else{
			printf("%d is not found in the Array\n",key);	
		}
    	printf("\n\n");
	}
	return 0;
}
