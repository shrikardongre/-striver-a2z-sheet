#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (true) {
        // Increment i while arr[i] is less than or equal to pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }

        // Decrement j while arr[j] is greater than pivot
        while (j >= low && arr[j] > pivot) {
            j--;
        }

        // If pointers cross, break
        if (i >= j) {
            break;
        }

        // Swap elements at i and j
        std::swap(arr[i], arr[j]);
    }

    // Swap pivot with element at j
    std::swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pindex = partition(arr, low, high);
        quickSort(arr, low, pindex - 1);
        quickSort(arr, pindex + 1, high);
    }
}

int main() {
    int arr[] = {1, 4, 5, 8, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
