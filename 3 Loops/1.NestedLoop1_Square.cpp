#include<iostream>
using namespace std;

int main() {
    int n=4;
    int num=1;
    for (int i=1; i<n; i++) { //Outer
        for (int j=1;j<n; j++){ //Inner
            cout<< num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}