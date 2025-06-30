#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, rev_num = 0, last_digit, temp;
    cout << "Enter the value of n: ";
    cin >> n;
    temp = n;
    
    while (n!=0){
        last_digit = n%10;
        rev_num = (rev_num*10) + last_digit;
        n = n/10;
    }
    (rev_num == temp) ? cout << "Palindrome" : cout << "Not Palindrome" ;

    return 0;
}