#include <bits/stdc++.h>
using namespace std;
class LL{
    public:
    int data;
    LL* next;
    
    public:
    LL(int data1,LL* next1){
        data=data1;
        next=next1;
    }
    
    public:
    LL(int data1){
        data=data1;
        next=nullptr;
    }
    
};
LL* converter(vector<int>&arr){
    LL* head= new LL(arr[0]);
    LL* mover=head;
    for (int i=1;i<arr.size();i++){
        LL* temp=new LL(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main(){
    vector<int>arr={12,5,3,7};
    LL* head=converter(arr);
    LL* temp=head;
    while (temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
