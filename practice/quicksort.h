#pragma once
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right];
    int j = left-1;
    
    for(int i = left; i < right; i++) {
        if(arr[i] < pivot) {
            j++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j+1], arr[right]);
    return j+1;
}

void quicksort(vector<int>& arr, int left, int right) {
    if(left >= right) {
        return;
    }

    int pivot = partition(arr, left, right);
    quicksort(arr, left, pivot-1);
    quicksort(arr, pivot+1, right);
}
