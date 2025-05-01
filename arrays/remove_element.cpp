#include<iostream>
using namespace std;


int removeElement(vector<int>& nums, int val) {
   
    int n = nums.size();
    if(n==0) return 0;

    int left=0, right=0;

    while(right<n) {
        
        if(nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
        right++;
    }
    return left;

}

int main() {
    
    int n; cin>>n;
    vector<int> nums(n);
    
    int element; 
    cin>> element;

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
   cout<< removeElement(nums, element);

 }
