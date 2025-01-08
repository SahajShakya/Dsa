#include<iostream>
using namespace std;



int main() {
    int n=4;
    for (int i=0; i<n; i++) { //Outer
        //Spaces
        for (int j=0;j<i;j++){ // I times
            cout<<" ";
        }
        //Numbers
        for (int j=0; j<n-i; j++) {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}