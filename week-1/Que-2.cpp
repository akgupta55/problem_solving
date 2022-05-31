// Given an array of integers, find the sum of its elements.

// For example, if the array ar[1 2 3] , 1+2+3=6 , so return 6.

// sample input
// 6
// 1 2 3 4 10 11

// sample output
// 31

// write only fuction

#include<iostream>
#include<vector>

using namespace std;
int main() {
    int n,a;
    cin>>n;
    vector<int> ar;
    for (int i=0; i<n; i++) {
        cin>>a;
        ar.push_back(a);
    }
    accumulate(ar.begin(),ar.end(),0);
    return 0;
}

