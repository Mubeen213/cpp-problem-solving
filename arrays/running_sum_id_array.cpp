#include<iostream>
using namespace std;


vector<int> runningSum(vector<int>& nums) {
    
    int n = nums.size();
    vector<int> prefixSum(n);
    if(n==0) return prefixSum;

    prefixSum[0] = nums[0];
    for(int i=1; i< nums.size(); i++) {
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    return prefixSum;
}

int main() {
    
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
    vector<int> ans = runningSum(nums);

    for(int i=0; i<n; i++) {
        cout<< ans[i] << " ";
    }
}

