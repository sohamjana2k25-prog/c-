
void reverseArray(vector<int> &arr , int m) {
    int start=m;
    int last=arr.size();
    int end=arr.size()-1;
    int i=0;
    int count=0;
    int ele=(end+start)/2;
    for (i=0;i<=end;i++){
        if (i<=start){
            continue;
        }
        else{
            count++;
            if (i<=ele){ 
                swap(arr[i],arr[last-count]);
            }
            else{
                break;
            }
        }
    }
}
