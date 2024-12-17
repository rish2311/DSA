#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if(!isSwap) { // array is already sorted
            return;
    }
}

// T.C. - O (N SQUARE).

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Add this to ensure output is neatly formatted
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 3, 2};

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
