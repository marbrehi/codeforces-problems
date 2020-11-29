#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    string a,b;

    cin >> a >> b;

    for(int i = 0; i < a.size(); ++i){
        if(a[i] == b[i]) cout << 0;
        else cout << 1;
    }
    cout << endl;
    
    return;
    
}

int main(){
    read();
    return 0;
}