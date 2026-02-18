// Finding Minimum and Maximum

#include <stdio.h>

int main() {
    int n;
    int array[50];
    int min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    min = array[0];
    max = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] < min)
            min = array[i];

        if (array[i] > max)
            max = array[i];
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
