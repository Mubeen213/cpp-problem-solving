#include<iostream>
#include<climits>
using namespace std;

vector<int> leftRightDifference(vector<int>& nums) {
    
    int size = nums.size();
    vector<int> leftSum(size), rightSum(size), answer;
    
    leftSum[0] = 0;

    for(int i=1; i<size; i++) {
        leftSum[i] = leftSum[i-1] + nums[i-1];
    }

    rightSum[size-1] = 0;

    for(int i=size-2; i>=0 ;i--) {
        
        rightSum[i] = rightSum[i+1] + nums[i+1];
    }

    for(int i=0;i<size;i++) {
        
        answer.push_back(abs(rightSum[i] - leftSum[i]));
    }
    return answer;
}
