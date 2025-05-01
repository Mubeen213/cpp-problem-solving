#include<iostream>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
        
    int n = nums.size();
    vector<int> ans(2*n);

    for(int idx=0; idx< n; idx++) {
        ans[idx] = nums[idx];
        ans[n+idx] = nums[idx];
    }
    return ans;
}

int main() {
    
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    
    vector<int> res = getConcatenation(nums);

    for(int i=0; i<res.size(); i++) {
        cout<< res[i] << " ";
    }
}
