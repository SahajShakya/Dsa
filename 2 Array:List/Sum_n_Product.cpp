#include <iostream>
using namespace std;

// Sum function using array
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];  // Access each element directly
    }
    return total;
}

// Multiply function using array
int mul(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];  // Access each element directly
    }
    return product;
}

int main() {
    int arr[] = {1, 2, 3, 4};  // Declare a fixed-size array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    cout << sum(arr, size) << endl;  // Output: 10
    cout << mul(arr, size) << endl;  // Output: 24

    return 0;
}
