#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;


vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
    int n = nums.size();
    vector<int> ans;

    for(int i = 0; i<n; i++) {
        int smallNumbers = 0;
        // go towards left
        for(int j=i-1; j>=0; j--) {
            if(nums[j] < nums[i]) smallNumbers++;
        }

        //go towards right

        for(int j=i+1; j<n; j++) {
            if(nums[j] < nums[i]) smallNumbers++;
        }
        ans.push_back(smallNumbers);
    }
    return ans;
}

vector<int> smallerUsingSort(vector<int>& nums) {
        
    int size = nums.size();

    vector<int> sorted = nums;
    sort(sorted.begin() , sorted.end());

    unordered_map<int,int> rank;
    vector<int> ans;
    for(int i=0; i<size; i++) {
        
        if(rank.find(sorted[i]) == rank.end()) {
            rank[sorted[i]] = i;
        }
    }
    for(int num: nums) {
        ans.push_back(rank[num]);
    }
    return ans;
}
int main() {
    
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    vector<int> ans =  smallerUsingSort(nums);

    for(int i=0; i<ans.size(); i++) {
        cout<< ans[i] << " ";
    }
}

