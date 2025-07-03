#include <bits/stdc++.h>
using namespace std;

// Array Hashing, hash array can go upto 20 T.C. O(n+q) S.C. = O(n)

   int main(){
    int n;
    cin >> n;
    int arr[n];
    int hash[21] = {0};

    for (int i = 0; i<n; i++){
        cin >> arr[i];
        hash[arr[i]]++;
    }

    int q; // Number of queries
    cin >> q;

    while(q--){
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }

    return 0;
}

// Using map T.C. {O(log n)}

    int n;
    cin >> n;
    int arr[n];
    map <int,int> mpp;

    for (int i = 0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q; // Number of queries
    cin >> q;

    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}

// Using unordered map, Best and average case T.C. = O(1), worst case = O(n)

    int n;
    cin >> n;
    int arr[n];
    unordered_map <int,int> mpp;

    for (int i = 0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q; // Number of queries
    cin >> q;

    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}