#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    lli n, asize, bsize;
    string a, b;

    cin >> a >> b >> n;
    asize = a.size();
    bsize = b.size();

    if(asize == n) cout << a;
    else{
        if((asize + bsize) > n) cout << -1;
        else{
            
        }
    }


    
    return;
    
}

int main(){
    read();
    return 0;
}