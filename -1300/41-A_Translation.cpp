#include <bits/stdc++.h>

using namespace std;

void read(){
    string s, t;
    cin >> s;
    cin >> t;
    reverse(t.begin(), t.end());

    if (s == t){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main(){
    read();
    return 0;
}