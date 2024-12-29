#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,10,-6,100,20};
    int max = INT_MIN;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest Number is: "<<max<<endl;
    return 0;
}