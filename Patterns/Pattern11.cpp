/*

    1
    01
    101
    0101


*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1;i<=n;i++){
        for (int j = 0; j<i;j++){
            if(i%2==0 && j%2==0 || i%2 == 1 && j%2 == 1){
                cout<< "0";
            }
            else {
                cout<<"1";
            }
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