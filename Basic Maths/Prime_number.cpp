// O(sqrt(n)) time complexity

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i*i<=n; i++){
        if (n%i == 0){
            count++;
            if(n/i != i){
                count++;
            }
        }
    }

    (count==2) ? cout<<"Prime number" : cout << "Not a prime number";

    return 0;
}