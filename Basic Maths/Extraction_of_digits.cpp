#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, last_digit;
    cout << "Enter the value of n: ";
    cin >> n;
    
    while (n!=0){
        last_digit = n%10;
        n = n/10;
        cout << last_digit << endl;
    }

    return 0;
}