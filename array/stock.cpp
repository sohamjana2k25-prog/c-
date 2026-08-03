//BRUTE FORCE 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int hold;
       int arr[prices.size()];
       for (int i=0;i<prices.size();i++){
        hold=prices[i];
        int maxi=0;
        for (int j=i+1;j<=prices.size()-1;j++){
            maxi=max(maxi,prices[j]);
        }
        if (hold<maxi){
            arr[i]=maxi-hold;
        }
        else{
            arr[i]=0;
        }
       }
       return *max_element(arr, arr + prices.size());
       
    }
};

//OPTIMAL
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=0;
       int cost;
       int mini=prices[0];
       for (int i=1;i<prices.size();i++){
        cost=prices[i]-mini;
        profit=max(profit,cost);
        mini=min(mini,prices[i]);
       }
       return profit;
    }
};
