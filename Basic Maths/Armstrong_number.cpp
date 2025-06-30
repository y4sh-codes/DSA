#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, last_digit, sum = 0, digits = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int temp = n;

    while(temp!=0){
        digits++;
        temp = temp/10;
    }

    temp = n;

    while(temp!=0){
        sum = sum + pow((temp%10) , digits);
        temp = temp/10;
    }

    (sum == n) ? cout << "Armstrong number" : cout << "Not Armstrong number" ;

    return 0;
}