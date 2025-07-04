#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i<=n-2; i++){
        int mini = i;
        for (int j = i; j<=n-1; j++){
            if(arr[j]<arr[i]){
                mini = j;
            }
            int temp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = temp;
        }
    }
}

int main(){
    int n;
    cout << "Enter number of elements in the array: " ;
    cin >> n;
    int arr[n];

    for (int i = 0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}