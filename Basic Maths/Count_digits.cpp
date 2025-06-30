#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    
    while (n!=0){
        count++;
        n = n/10;
    }

    cout << "The number of digits are: " << count;

    return 0;
}