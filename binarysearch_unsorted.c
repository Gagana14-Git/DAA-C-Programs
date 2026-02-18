#include<stdio.h>

int main(){
    int n,key,temp,found=0;
    int iteration=0;
    
    int array[50];
    
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    
    printf("\n");
    printf("Enter %d elements \n",n);
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    
    for(int a=0;a<n;a++){
        if(array[a]>array[a+1]){
            printf("Unsorted array! Sorting the array using bubble sort..\n");
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                    iteration++;

                    if(array[j]>array[j+1]){
                        temp=array[j];
                        array[j]=array[j+1];
                        array[j+1]=temp;
                    }
                }
            }
            break;
        }
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
    
    