//fractional knapsack

#include <stdio.h>

int main() {
    int n;
    float capacity;
    float w[50], p[50], ratio[50], x[50];
    float cap, Z = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter knapsack capacity: ");
    scanf("%f", &capacity);

    for (int i = 0; i < n; i++) {
        printf("Enter weight and profit of item %d: ", i + 1);
        scanf("%f %f", &w[i], &p[i]);
        ratio[i] = p[i] / w[i];   // unit weighted profit
        x[i] = 0;
    }

    // Sort by unit weighted profit (descending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                float temp;

                temp = ratio[i]; ratio[i] = ratio[j]; ratio[j] = temp;
                temp = w[i];     w[i] = w[j];         w[j] = temp;
                temp = p[i];     p[i] = p[j];         p[j] = temp;
            }
        }
    }

    cap = capacity;

    // Fractional knapsack logic
    for (int i = 0; i < n; i++) {
        if (w[i] <= cap) {
            x[i] = 1;
            cap -= w[i];
        } else {
            x[i] = cap / w[i];
            break;
        }
    }

    for (int i = 0; i < n; i++)
        Z += x[i] * p[i];

    printf("\nUnit Weighted Profit Case: %.2f\n", Z);

    return 0;
}
