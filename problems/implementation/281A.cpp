#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string st;
    cin >> st;
    cout << (char) toupper(st[0]) << st.substr(1);
    return 0;
}