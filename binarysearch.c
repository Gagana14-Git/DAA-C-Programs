//Binary search

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
    
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
        printf("\n");
            
        printf("Enter the key to be searched: ");
        scanf("%d",&key);
    
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(array[mid]==key){
                printf("The key found at index: %d",mid);
                found=1;
                break;
            }
            else if(array[mid]<key){    //search the element to the right
                low=mid+1;
            }
            else{                       //search the element to the left
                high=mid-1;
            }
        }
            
    if(!found){
        printf("Key not found");
    }
    
    
    return 0;
}