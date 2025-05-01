#include<iostream>
using namespace std;

/**
 *Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
 */

vector<int> shuffleArray(vector<int>& nums, int n) {
    
    int size = nums.size();
    vector<int> shuffledArray;

    int left = 0, right=n;

    while((left<n) && (right<size)) {
        
            shuffledArray.push_back(nums[left]);
            shuffledArray.push_back(nums[right]);
            left++;
            right++;
    }
    return shuffledArray;
}

int main() {
    
    int n, size; cin>>size;
    cin>>n;
    vector<int> nums(size);
    
    for(int i=0; i<size; i++) {
        cin>> nums[i];
    }
    
    vector<int> ans = shuffleArray(nums, n);

    for(int i=0; i<size; i++) {
        cout<< ans[i] << " ";
    }
}
