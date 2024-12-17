#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){  // T.C. O(N^2)

    for(int i = 0; i < n-1; i++){
        int smallestIdx = i;  // fIRST ELEMENT OF UNSORTED PART
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        } 

        swap(arr[i], arr[smallestIdx]);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Add this to ensure output is neatly formatted
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 3, 2};

    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
