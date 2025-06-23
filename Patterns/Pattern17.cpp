/*
    A
   ABA
  ABCBA
 ABCDCBA
*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0;i<n;i++){
        for (int k = 1; k<=(n-i-1);k++){
            cout << " ";
        }
        for(int j = 0; j<=i;j++){
            cout << char(65+j);
        }
        for (int l = i ;l>=1;l--){
            cout << char(64+l);
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