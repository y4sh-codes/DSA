/*
        *
       ***
      *****
     *******

*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0;i<n;i++){
        for (int k = 0;k<(n-i-1);k++){
            cout << " ";
        }
    for (int j = 1; j<=(2*i+1);j++){
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