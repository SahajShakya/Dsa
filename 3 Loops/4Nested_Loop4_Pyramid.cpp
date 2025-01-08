#include<iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=0; i<n; i++) { //Outer
        //Spaces n-i-1
        for (int j=0;j<n-i-1;j++){ // I times
            cout<<" ";
        }
        //Numbers 1: i+ 1
        for (int j=1; j<i+i; j++) {
            cout<<j;
        }
        //Number 2:
        for (int j=i; j>=0; j--) {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}