#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        int len = word.length();

        if(len <= 10)
            cout << word;
        else
            cout << word[0] << len-2 << word[len-1];
        cout << "\n";
    }
    
    return 0;
}