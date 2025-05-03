#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


int maxProfit(vector<int>& prices) {
    
    int n = prices.size();
    
    int maxprofit = -1, minElement = INT_MAX;

    for(int i=0; i<n; i++) {
        
         minElement = min (minElement, prices[i]);
        maxprofit = max(maxprofit, prices[i] - minElement);
    }
    return maxprofit;
}

int main() {
    
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    cout<< maxProfit(nums);
}

