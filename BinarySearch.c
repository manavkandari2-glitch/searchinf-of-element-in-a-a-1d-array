#include<stdio.h>
void BinarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            printf("Element %d found at index %d\n", key, mid);
            return;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Element %d not found in the array\n", key);
}   
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 3;
    BinarySearch(arr, n, key);
    return 0;
}   