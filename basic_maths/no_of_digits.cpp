#include <iostream>
using namespace std;
int main() {
    int x;
    int rem=0;
    int count=0;
    cin>>x;
    if (x==0){
        cout << 1;
    }
    else {
        while (x!=0){
            count++;
            x=x/10;
        }
    cout << count;
    }
    return 0;
}
