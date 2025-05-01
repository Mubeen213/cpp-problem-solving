#include<iostream>
#include <unordered_map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    if(n<=1) {
        return {-1,-1};
    }
    
    unordered_map<int,int> lookUp;

    lookUp[nums[0]] = 0;

    for(int i=1; i<n; i++) {
        
        if(lookUp.find(target-nums[i]) != lookUp.end()) {
           int pairIndexOne =  lookUp[target-nums[i]];
           int pairIndexTwo = i;
           return {pairIndexOne, pairIndexTwo};
        }
        lookUp[nums[i]]= i;
    }   
    return {-1,-1};
}

int main() {
    
    int n; cin>>n;
    int target;
    cin>>target;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
    vector<int> ans = twoSum(nums, target);

    for(int i=0; i<ans.size(); i++) {
        cout<< ans[i] << " ";
    }
}
