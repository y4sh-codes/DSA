// Parameterized recursion

#include <bits/stdc++.h>
using namespace std;

void sumRecursive(int i, int sum){
    if (i<1){
        cout << sum << endl;
        return;
    }

    sumRecursive(i-1, sum+i);
}

int main(){
    int n;
    cin >> n;
    sumRecursive(n, 0);
    return 0;
}

// Functional Recursion

int func(int n){
    if(n==0){
        return 0;
    }
    return n + func(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}