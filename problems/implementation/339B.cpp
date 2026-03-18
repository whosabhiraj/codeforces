#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;
    long long count = 0, pos = 1;
    
    for(int i = 0; i < m; i++){
        long long task;
        cin >> task;
        count += (task - pos + n) % n;
        pos = task;
    }

    cout << count;
    return 0;
}