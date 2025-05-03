#include<iostream>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxWealth = -1;
      for(int customer = 0; customer < accounts.size(); customer++) {
         
          int wealth = 0;

          for(int bank=0; bank < accounts[customer].size(); bank++) {
                wealth += accounts[customer][bank];
          }
        maxWealth = max(maxWealth, wealth);
      }

        return maxWealth;
}
