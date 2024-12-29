#include <iostream>
using namespace std;

bool isPresent(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

int* calculateIntersection(int* arr1, int size1, int* arr2, int size2, int& intersectionSize) {
    int* intersectionArr = new int[min(size1, size2)];
    intersectionSize = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j] && !isPresent(intersectionArr, intersectionSize, arr1[i])) {
                intersectionArr[intersectionSize] = arr1[i];
                intersectionSize++;
                break;
            }
        }
    }
    return intersectionArr;
}


int* calculateUnion(int* arr1, int size1, int* arr2, int size2, int& unionSize) {
    int* unionArr = new int[size1 + size2];
    unionSize = 0;
    for (int i = 0; i < size1; i++) {
        unionArr[unionSize] = arr1[i];
        unionSize++;
    }
    for (int i = 0; i < size2; i++) {
        if (!isPresent(unionArr, unionSize, arr2[i])) {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }
    return unionArr;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int intersectionSize = 0;
    int* intersectionArr = calculateIntersection(arr1, size1, arr2, size2, intersectionSize);

    cout << "Intersection of arr1 and arr2: ";
    for (int i = 0; i < intersectionSize; i++) {
        cout << intersectionArr[i] << " ";
    }
    cout << endl;

    delete[] intersectionArr;

    int unionSize = 0;
    int* unionArr = calculateUnion(arr1, size1, arr2, size2, unionSize);

    cout << "Union of arr1 and arr2: ";
    for (int i = 0; i < unionSize; i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;
    delete[] unionArr;

    return 0;
}
