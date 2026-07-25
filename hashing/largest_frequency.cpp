#include <bits/stdc++.h>
using namespace std;
void Frequency(int arr[], int n) {
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[arr[i]]++;
    }
    int largest=0;
    int corr=0;
    for (auto x : map) {
        if (largest<=x.second){
            largest=x.second;
            corr=x.first;
        }
    }
    cout << corr << " " << largest << endl;
}

int main() {
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}
