#include<iostream>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    
    vector<int> ans;

    for(int idx=0; idx<nums.size(); idx++) {
        ans.push_back(nums[nums[idx]]);
    }
    return ans;
}

int main(){
    
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) {
        cin>> nums[i];
    }
   
    vector<int> res = buildArray(nums);

    for(int i=0; i<n; i++) {
        cout<< res[i]<<" ";
    }
}
