// C++ program to implement Selection Sort
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        // Assume the current position holds the minimum element
        int min_ind = i;

        // Iterate through the unsorted portion
        // to find the actual minimum or the smallest element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_ind]) {

                // Update min_ind if a smaller element is found
                min_ind = j; 
            }
        }

        // Move minimum element to it's correct position
        swap(arr[i], arr[min_ind]);
    }
}

void printArray(vector<int> &arr) {
    for (int &val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5,1,3,0,-1,2};

    cout << "Original array: ";
    printArray(arr); 

    selectionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
