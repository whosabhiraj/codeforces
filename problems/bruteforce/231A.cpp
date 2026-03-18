#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, count = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int p, v, t;
        cin >> p >> v >> t;
        if(p+v+t >= 2)
            count++;
    }

    cout << count;
    
    return 0;
}