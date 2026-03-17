#include <bits/stdc++.h>
using namespace std;

int solve(int output[], int n, int k, int j){
    vector<string> table;

    switch(n){
        case 12:{
            table = {"12", "21"};
            break;
        }
        case 123:{
            table = {"123", "132", "213", "231", "312", "321"};
            break;
        }
        case 1234:{
            table = {"1234", "1243", "1324", "1342", "1423", "1432", "2134", "2143", "2314", "2341", "2413", "2431", "3124", "3142", "3214", "3241", "3412", "3421", "4123", "4132", "4213", "4231", "4312", "4321"};
            break;
        }
    }

    j--, k--;

    string st1 = table[j];
    string st2 = table[k];

    int a = 0, b = 0;

    for(int i = 0; i < st1.length(); i++){
        if(st1[i] == st2[i])
            a++;
        else if(st2.find(st1[i]) != string::npos)
        b++;
    }
    output[0] = a;
    output[1] = b;

    return 0;
}

int main() {
    int t, output[2];
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, j, k;
        cin >> n >> j >> k;
        solve(output, n, k, j);
        cout << output[0] << "A" << output[1] << "B\n";
    }
    return 0;
}