//Bubble Sort

#include<stdio.h>

int main(){
    int n,temp,iteration=0;
    
    int array[50];
    
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    
    printf("\n");
    printf("Enter %d elements \n",n);
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    
    printf("Unsorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    
    printf("\n");
    
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
    
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    printf("No. of Iterations: %d",iteration);
    
    return 0;
}





