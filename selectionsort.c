//Selection Sort

#include<stdio.h>

int main(){
    int n,temp,iteration=0;
    
    int array[50];
    
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    printf("\n");
    
    printf("Enter %d elements: \n",n);
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
        int min_index=i;
        for(int j=i+1;j<n;j++){
            iteration++;
            if(array[j]<array[min_index]){
                min_index=j;
            }
        }
        
        temp=array[min_index];
        array[min_index]=array[i];
        array[i]=temp;
    }
    
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    
    printf("\n");
    printf("No. of iterations: %d ",iteration);
    
    return 0;
}

