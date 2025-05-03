#include<iostream>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    
    int size = nums.size();
    vector<int> target(size);
    int currSize = 0;

    for(int i=0; i<size; i++) {
        
        int insertAtIndex = index[i];
        for(int j=currSize; j> insertAtIndex; j--) {
            target[j] = target[j-1];
        }   
        target[insertAtIndex] = nums[i];
        currSize++;
    }
    return target;
}
