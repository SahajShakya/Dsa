//Linear search
// arr[]={1,2,3,4} target=8
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i=1; i<size; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = linearSearch(arr, size, target);

    cout<<"The target is in index: "<<index;
    return 0;
}