#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int arr[3] = {a, b, c};
        sort(arr, arr+3);
        
        cout << arr[1] << "\n";
    }

    return 0;
}