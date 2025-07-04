#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = n-1; i>=1; i--){
        int didSwap = 0;
        for (int j = 0; j<=i-1; j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }

        if (didSwap == 0){
            break;
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

    bubbleSort(arr, n);

    cout << "Sorted Array: ";

    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}