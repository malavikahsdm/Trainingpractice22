#include <stdio.h>

int main() {
    // Define the two arrays
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    
    // Manually determine the sizes of the arrays
    int size1 = 5;
    int size2 = 5;
    
    // Create a merged array with size equal to the sum of the two arrays' sizes
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];
    
    // Indexes for traversing the arrays
    int i, j;
    
    // Copy elements from the first array to the merged array
    for (i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    
    // Copy elements from the second array to the merged array
    for (j = 0; j < size2; j++) {
        mergedArr[i+j] = arr2[j];
        //i++;
    }
    
    // Print the merged array
    printf("Merged array:\n");
    for (int k = 0; k < mergedSize; k++) {
        printf("%d ", mergedArr[k]);
    }
    printf("\n");
    
    return 0;
}
