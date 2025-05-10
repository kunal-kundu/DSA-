// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int lb,int ub){
    int pivot = lb;
    int start = lb;
    int end = ub;
    
    while(start < end){
        while(arr[start] <= arr[pivot]){
            start++;
        }
        while(arr[end] > arr[pivot]){
            end--;
        }
        if(start < end){
            swap(arr[start],arr[end]);
        }
    }
    
    swap(arr[pivot], arr[end]);
    return end;
}

void quickSort(vector<int> &arr,int lb,int ub){
    if(lb > ub) return;
    
    int loc = partition(arr,lb,ub);
    quickSort(arr,lb,loc-1);
    quickSort(arr,loc+1,ub);
}

int main() {
    // Write C++ code here
    vector<int> arr = {5,-1,7,2,9,3,-6,2};
    quickSort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;
}
