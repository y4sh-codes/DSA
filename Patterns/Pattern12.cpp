/*

    1      1
    12    21
    123  321
    12344321

*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1;i<=n;i++){
    for (int j = 1; j<=i;j++){
            cout << j;
        }
    for(int k = i; k<(2*n-i);k++){
        cout << " ";
    }
    for (int l = i; l>=1;l--){
        cout << l;
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