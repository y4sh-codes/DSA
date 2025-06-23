/*
    *      *
    **    **
    ***  ***
    ********
    ***  *** 
    **    **
    *      *
*/



#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 1; i<=(2*n-1);i++){
        if (i>n){
            for (int j = i; j<=(2*n-1);j++){
                cout << "*" ;
            }
            for (int k = n; k>(2*n-i); k--){
                cout << "  ";
            }

            for (int j = i; j<=(2*n-1);j++){
                cout << "*" ;
            }
        }

        else{   

            

        for(int j = 1; j<=i;j++){
            cout << "*" ;
        }

        for (int k = i; k<(2*n-i); k++){
            cout << " ";
        }
        for(int j = 1; j<=i;j++){
            cout << "*" ;
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