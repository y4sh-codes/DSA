#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr, int low, int mid, int high){
    vector <int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = 0; i<temp.size(); i++){
        arr[low + i] = temp[i];
    }
}
void mergeSort(vector <int> &arr, int low, int high){
    if (low>=high){
        return;
    }

    int mid = (low + high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge (arr, low, mid, high);

}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector <int> arr(n);

    for (int i = 0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array: ";

    for (auto it: arr){
        cout << it << " ";
    }

    return 0;
    
}