// Quick Sort

#include <stdio.h>

int iteration = 0;

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++) {
        iteration++;
        if (array[j] < pivot) {
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;

    return i + 1;
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    int n;
    int array[50];

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array (unsorted): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    quickSort(array, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("No. of iterations: %d\n", iteration);

    return 0;
}
