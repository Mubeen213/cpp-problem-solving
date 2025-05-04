#include<iostream>
#include<climits>
using namespace std;


int minStartValue(vector<int>& nums) {
    
    int runningSum = 0, minValue = 0;

    for(int num: nums) {
        runningSum += num;
        minValue = min(minValue, runningSum);
    }
    return (1-minValue);
}
