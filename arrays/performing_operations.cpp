#include<iostream>
#include<unordered_map>
using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    
    int x=0;
    for(int i=0; i<operations.size(); i++) {
        
        if(operations[i] == "--X") {
            --x;
        } else if(operations[i] == "X--") {
            x--;
        } else if(operations[i] == "++X") {
            ++x;
        } else if(operations[i] == "X++") {
            x++;
        } else {
            cout<< "Unknown operation";
        }
    }
    return x;
}

int finalValue(vecrot<string>& operations) {
    
    int x=0;

    for(string& op: operations) {
        if(op == "--X" || op == "X--") {
            x--;
        } else {
            x++;
        }
    }
    return x;
}
