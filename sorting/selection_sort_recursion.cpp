#include <bits/stdc++.h>
using namespace std;
void vsort(vector<int>&vec,int low,int high){
    if (low==high){
        return;
    }
    auto least_index =min_element(vec.begin()+low, vec.end());
    swap(vec[low],*least_index);
    vsort(vec,low+1,high);
}
int main() {
    vector<int>v1{13,46,24,52,20,9};
    vsort(v1,0,v1.size()-1);
    for (int x : v1) {
        cout << x << " ";
    }
    cout << "\n";
    
    return 0;
}
