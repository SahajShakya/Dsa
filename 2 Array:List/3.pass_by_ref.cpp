#include<iostream>
using namespace std;

void changeArr(int arr[], int size){
    //Pass by reference
    for(int i=0; i<size;i++){
        arr[i] = 2*arr[i];
    }
}

int main() {
    int arr[]={1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    changeArr(arr, size);
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}