/*
    A
    AB
    ABC
    ABCD
*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1;i<=n;i++){
        for(int j = 1; j<=i;j++){
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