#include<iostream>
#include<unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    
    unordered_set<int> lookUp;

    for(int num: nums) {
        if(lookUp.find(num) != lookUp.end()) {
            return true;
        }
        lookUp.insert(num);
    }
    return false;
}

int main() {
    
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
   cout<< containsDuplicate(nums);
}
