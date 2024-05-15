/* 
Boshidan boshlab oxirigacha qidirishga berilgan qoymatni topmaguncha qidira veradi.


*/
#include <stdio.h>

int binary_search(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = (high + low) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            return binary_search(arr, low, mid - 1, x);
        } else {
            return binary_search(arr, mid + 1, high, x);
        }
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26}; // Sorted array
    int x = 10;
    int result = binary_search(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1, x);
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }
    return 0;
}
