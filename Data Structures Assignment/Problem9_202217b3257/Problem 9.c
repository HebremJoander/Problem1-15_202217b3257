//202217b3257 - Hebrem Joander P

#include <stdio.h>
/* function to sort an array with insertion sort */
void insert(int a[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        /* Move the elements greater than temp to one position ahead from their
current position*/

        while (j >= 0 && temp <= a[j]) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}

void printArr(int a[], int n) { /* function to print the array */
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    int a[100]; // Assuming a maximum of 100 elements
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ask the user to input the elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Before sorting array elements are - \n");
 printArr(a, n);

    // Call the insert function
    insert(a, n);

    // Print the sorted array
    printf("Sorted array: ");
    printArr(a, n);

    return 0;
}
