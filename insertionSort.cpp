#include <bits/stdc++.h>
using namespace std;

/* insertion sort */
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        /* Move element arr[j], that are
           greater than key, to one position ahead(right side)
           of their current position */

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
