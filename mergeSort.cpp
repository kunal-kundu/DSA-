
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v,int lo,int mid,int hi){
    
    vector<int> arr(100);
    int i = lo;
    int j = mid+1;
    int k = lo;
    
    while(i <= mid && j <= hi){
        if(v[i] < v[j]){
            arr[k] = v[i];
            i++;
        }
        else{
            arr[k] = v[j];
            j++;
        }
        k++;
    }
    
    while( i <= mid){
        arr[k] = v[i];
        i++;
        k++;
    }
    
    while( j <= hi){
        arr[k] = v[j];
        j++;
        k++;
    }
    
    for(int i=lo; i <= hi ;i++){
        v[i] = arr[i];
    }
}

void mergeSort(vector<int> &v,int lo,int hi){
    
    if( lo >= hi) return;
    
    int mid = (lo+hi)/2;
    
    mergeSort(v,lo,mid);
    mergeSort(v,mid+1,hi);
    merge(v,lo,mid,hi);
}

int main() {
    
    vector<int> v = {5,7,-1,6,11,0,3,3};
    mergeSort(v,0,v.size()-1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
