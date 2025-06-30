// Euclidean theorem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cout << "Enter value of a and b: ";
    cin >> a >> b;

    while (a!=0 && b!=0){
        if (a>b) {
            a = a%b;
        }
        else{
            b = b%a;
        }
    }

    (a==0) ? cout << b : cout << a;

    return 0;
}