#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key, int& Comparisons) {
    int low = 0, high = n - 1, mid, count = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        count++;
        if (arr[mid] == key) {
            Comparisons = count;
            return mid;
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
Comparisons = count;
return -1; 
}

int main() {
    int arr[] = {9, 8, 7, 6, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int Comparisons = 0;
    int index = binarySearch(arr, n, key, Comparisons);
    if (index == -1) {
        cout << "key not found" << endl;
        } 
        else {
            cout << "key found at index " << index << endl;
        }
    cout << "comparisons: " << Comparisons << endl << "Array: ";
    for (   int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}