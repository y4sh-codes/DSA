/*
    ABCD
    ABC
    AB
    A
*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0;i<n;i++){
        for(int j = 1; j<=(n-i);j++){
            cout << char(64+j) << " ";
        }
    cout << endl;
    }
}

int main(){

    int n;
    cin >> n;

    print(n);
    return 0;
}