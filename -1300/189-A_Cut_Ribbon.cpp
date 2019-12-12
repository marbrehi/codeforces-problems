#include <iostream>

using namespace std;

void pieces(int n, int a, int b, int c){
    int p = 0;

    if (a == n)
        p = p;
    else if (a < n || a > n)
        p = p + 1;

    if (b == a)
        p = p;
    else if (b < a || b > a)
        p = p + 1;

    if (c == b)
        p = p;
    else if (c < b || c > b)
        p = p + 1;


    cout << p << endl;

    return;
}

void read(){
    int n, a, b , c;

    cin >> n >> a >> b >> c;

    pieces (n,a,b,c);

    return;
}

int main(){
    read();
    return 0;
}