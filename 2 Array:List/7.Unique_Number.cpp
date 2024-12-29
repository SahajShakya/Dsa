#include <iostream>
using namespace std;

void unique(int arr[], int size) {
    int count;
    bool isUnique;
    cout << "Unique elements: " << endl;
    for (int i = 0; i < size; i++) {
        isUnique = true;

        cout << "Checking element: " << arr[i] << endl;
        for (int j = 0; j < i; j++) {
            cout << "Comparing array i" << arr[i] << " with array j " << arr[j] << endl;
            if (arr[i] == arr[j]) {
                isUnique = false;
                cout << arr[i] << " is a duplicate!" << endl;
                break;
            }
        }
        if (isUnique) {
            count = 0;
            for (int k = 0; k < size; k++) {
                cout << "Counting occurrences of array i " << arr[i] << " in the array array j as: " << arr[k] << endl;
                if (arr[i] == arr[k]) {
                    count++;
                }
            }
            if (count == 1) {
                cout << arr[i] << " appears exactly once and is unique!" << endl;
                cout << arr[i] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    unique(arr, size);

    return 0;
}
