#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    cin >> n >> l;
    
    vector<int> v = {0};
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    v.push_back(l);
    sort(v.begin(), v.end());
    
    long double maxdiff = (long double) v[1] - 0;
    for(int i = 0; i < n; i++){
        long double gap = (long double)(v[i+1] - v[i]) / 2.0;
        if(gap > maxdiff)
            maxdiff = gap;
    }

    long double gap = v[n+1] - v[n];
    if(gap > maxdiff)
        maxdiff = gap;

    cout << fixed << setprecision(7) << maxdiff;

    return 0;
}