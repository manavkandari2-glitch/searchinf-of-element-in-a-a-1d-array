#include<stdio.h>
void LinearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            return;
        }
    }
    printf("Element %d not found in the array\n", key);
}
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 3;
    LinearSearch(arr, n, key);
    return 0;
}