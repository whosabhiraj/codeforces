#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    getline(cin, input);
 
    int len = input.length(), count = 0;
    char last = '9';
 
    for(int i = 0; i < len; i++){
        if(last == input[i])
            count++;
        else
            count = 1;
 
        if(count == 7){
            cout << "YES";
            return 0;
        }
 
        last = input[i];
    }
    
    cout << "NO";
    return 0;
}