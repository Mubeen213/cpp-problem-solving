#include<iostream>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    
    int n = nums.size();
    if(n==1) return 1;

    int left=0, right=1;

    while(right < n ) {
        
        if(nums[left] != nums[right])  {
            swap(nums[++left], nums[right++]);
        }
        right++;
    }
    return left+1;
}

int main() {
    
    int n; cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
    cout<< removeDuplicates(nums);

  }
