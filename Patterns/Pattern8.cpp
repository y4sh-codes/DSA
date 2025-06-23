/*
    *******
     *****
      ***
       *

*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1;i<=n;i++){
        for (int k = 1;k<i;k++){
            cout << " ";
        }
    for (int j = i; j<=(2*n-i);j++){
        cout << "*" ;
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