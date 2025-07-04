// #include <bits/stdc++.h>
// using namespace std;

// // Using array hashing, T.C. = O(n+q) S.C. = O(n)

// int main(){
//     string s;
//     cin >> s;

//     // If string is just of lowercase characters 
    
//     int hash[26] = {0};

//     for(int i = 0; i<s.size(); i++){
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;

//     while(q--){
//         char ch;
//         cin >> ch;
//         cout << hash[ch - 'a'] << " ";
//     }

//     return 0;
// }


// If string contains every character

//     string s;
//     cin >> s;

//     // If string is just of lowercase characters 
    
//     int hash[256] = {0};

//     for(int i = 0; i<s.size(); i++){
//         hash[s[i]]++;
//     }

//     int q;
//     cin >> q;

//     while(q--){
//         char ch;
//         cin >> ch;
//         cout << hash[ch] << " ";
//     }

//     return 0;
// }

// using map, T.C. = O(log n)

//     string s;
//     cin >> s;

//     map <char, int> mpp;

//     for(int i = 0; i<s.size(); i++){
//         mpp[s[i]]++;
//     }

//     int q;
//     cin >> q;

//     while(q--){
//         char ch;
//         cin >> ch;
//         cout << mpp[ch] << " ";
//     }

//     return 0;
// }

// Using unordered map, T.C. = O(1) in best and average case, O(n) in worst case

//     string s;
//     cin >> s;

//     unordered_map <char, int> mpp;

//     for(int i = 0; i<s.size(); i++){
//         mpp[s[i]]++;
//     }

//     int q;
//     cin >> q;

//     while(q--){
//         char ch;
//         cin >> ch;
//         cout << mpp[ch] << " ";
//     }

//     return 0;
// }