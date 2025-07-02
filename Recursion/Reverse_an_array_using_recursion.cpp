#include <bits/stdc++.h>
using namespace std;

// Using Two pointers

void func_two_pointers(int l, int r, int arr[]){
        if (l>=r){
            return;
        }
        swap(arr[l],arr[r]);
        func_two_pointers(l+1, r-1, arr);
    }

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    func_two_pointers(0, n-1, arr);

    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

// Using just one variable 

void func_one_variable(int i, int n, int arr[]){
    if (i>=n/2){
        return ;
    }

    swap (arr[i], arr[n-i-1]);
    func_one_variable(i+1, n, arr);
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    func_one_variable(0, n, arr);

    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}