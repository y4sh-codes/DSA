#include <bits/stdc++.h>
using namespace std;

bool check_paindrome(int i,string &s){
    if (i>=s.size()/2)
        return true;

    if(s[i]!=s[s.size() - i - 1])
        return false;

   return check_paindrome(i+1, s);
}

int main(){
    string s;
    cin >> s;

    cout << check_paindrome(0, s);

    return 0;
}