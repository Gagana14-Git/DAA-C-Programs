//Linear search

#include<stdio.h>

int main(){
    int n,key,found=0;
    
    int array[50];
    
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    
    printf("\n");
    printf("Enter %d elements \n",n);
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("Array: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Enter the key to search: ");
    scanf("%d",&key);
    
    for(int i=0;i<n;i++){
        if(key==array[i]){
            printf("Key found at index: %d",i);
            found=1;
            break;
        }
    }
    
    if(!found){
        printf("key not found");
    }
    
    return 0;
}