#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k, count = 0;
    cin >> n >> k;

    for(long long i = 1; i <= (n+1)/2; i++){
        if(n % i == 0)
            count++;
        if(count == k){
            cout << i;
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}