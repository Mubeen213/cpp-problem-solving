#include<iostream>
using namespace std;

int pivotIndex(vector<int>& nums) {
    
    int size = nums.size();
    for(int i=0; i<size; i++) {
        
        int lSum = 0;

        for(int j=i-1; j>=0; j--) {
            lSum += nums[j];
        }
        int rSum = 0;
        for(int j=i+1; j<size;j++) {
            rSum += nums[j];
        }

        if(lSum == rSum) {
            return i;
        }
    }
    return -1;
}

int pivotPrefSum(vector<int>& nums) {
    
    int size=nums.size(),  totalSum = 0;
    
    for(int num: nums) {
        totalSum += num;
    }

    int lSum = 0;

    for(int i=0; i<size; i++) {
        
        int rightSum = (totalSum - lSum - nums[i]);

        if(lSum == rightSum) {
            return i;
        }
        lSum += nums[i];
    }
    return -1;
}
