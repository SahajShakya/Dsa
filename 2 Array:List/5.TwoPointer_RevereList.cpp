#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int left = 0;
    int right = size-1;
    while(left!=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[1]);
    reverse(arr, size);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}