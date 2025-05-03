#include<iostream>
using namespace std;


void moveZeroes(vector<int>& nums) {
    
    int left = 0, n = nums.size();

    for(int right=0; right<n; right++) {

        if(nums[right] != 0) {
            swap(nums[left++] , nums[right]);
        }
    }
}

int main() {
    
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    moveZeroes(nums);

    for(int i=0;i<nums.size(); i++) {
        cout<< nums[i] << " ";
    }
}

