#include<iostream>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int>& nums) {
    
    int n = nums.size();

    // run a nested loop and count occurrence of picked element
    // if it is greater than n/2 than that is the majority element
    // 
    // take a map, store freq of each element.
    // iterate over map and get its freq and check for its occrrences greater than n/2
    // 
    
    unordered_map<int,int> elementToFreqCount;

    for(int num: nums) {
        elementToFreqCount[num]+=1;
    }
    
    for(const auto&pair: elementToFreqCount) {
        if(pair.second > (n/2) ) {
            return pair.first;
        }
    }
    return -1;
}

int main() {
    
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
    cout<< majorityElement(nums);

 }

