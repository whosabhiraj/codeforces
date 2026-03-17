#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string st1, st2;
    cin >> st1 >> st2;

    for(int i = 0; i < st1.length(); i++){
        if(toupper(st1[i]) > toupper(st2[i])){
            cout << 1;
            return 0;
        }
        else if(toupper(st1[i]) < toupper(st2[i])){
            cout << -1;
            return 0;
        }        
    }

    cout << 0;
    return 0;

}