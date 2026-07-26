
#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>& arr, int end, int n) {
    if (end == n) {
        return;
    }

    int key = arr[end];
    int j = end - 1;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;

    insertionSort(arr, end + 1, n);
}

void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    int n = arr.size();

    cout << "Original array: ";
    printArray(arr);

    insertionSort(arr, 1, n);

    cout << "Sorted array:   ";
    printArray(arr);

    return 0;
}
