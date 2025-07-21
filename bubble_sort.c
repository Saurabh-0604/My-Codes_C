#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // Outer loop 
    for (i = 0; i < n - 1; i++) {
        // Inner loop for pairwise comparisons
        for (j = 0; j < n - i - 1; j++) {
            // Swap if elements are not in order
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
