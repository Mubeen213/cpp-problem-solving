#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;


vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
    int largestNumber = INT_MIN;
    int n = candies.size();
    for(int i=0; i<n; i++) {
        largestNumber = max(largestNumber, candies[i]);
    }

    vector<bool> greatestCandies;
    
    for(int i=0; i<n; i++) {
      greatestCandies.push_back((candies[i]+extraCandies) >= largestNumber);
    }

    return greatestCandies;
}

int main() {
    
    int n; cin>>n;
    int extraCandies;
    cin>>extraCandies;

    vector<int> nums(n);

    for(int i=0; i<n; i++) {
        cin>> nums[i];
    }
    
    vector<bool> ans = kidsWithCandies(nums, extraCandies);
    cout<<"\n";
    for(int i=0; i<n; i++) {
        cout<< ans[i] << " ";
    }
}
