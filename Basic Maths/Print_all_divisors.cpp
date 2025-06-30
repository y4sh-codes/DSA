// O(n/2) time complexity

//  #include <bits/stdc++.h>
//  using namespace std;

// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     cout << "The divisors are: ";

//     for (int i = 1; i<=n/2; i++){
//         if (n%i == 0){
//             cout << i << ", ";
//         }
//     }

//     cout << n;

//     return 0;
// }

//  O(sqrt(n) + m log(m) + m)  where m is the number of factors 

//  int main(){
//      int n;
//      cout << "Enter the value of n: ";
//      cin >> n;
//      vector<int> ls;
//      cout << "The divisors are: ";

//      for (int i = 1; i*i<=n; i++){
//          if (n%i == 0){
//              ls.push_back(i);
//                 if (n/i != i){
//                     ls.push_back(n/i);
//                 }
//          }
//      }

//      sort(ls.begin(), ls.end());
//      for (auto it: ls) cout << it << " ";

//      return 0;
//  }

