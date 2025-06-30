#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, rev_num = 0, last_digit;
    cout << "Enter the value of n: ";
    cin >> n;
    
    while (n!=0){
        last_digit = n%10;
        rev_num = (rev_num*10) + last_digit;
        n = n/10;
    }

    cout << "Reversed number: " << rev_num;

    return 0;
}