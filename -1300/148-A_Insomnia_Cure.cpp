#include <bits/stdc++.h>

using namespace std;

int dragons (int d, int k, int l, int m, int n);

int main(){
    int d, k, l, m, n;

    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;

    cout << dragons (d, k, l, m, n);

    return 0;
}

int dragons (int d, int k, int l, int m, int n){
    int acumulate = 0;

    //if (k==1 | l==1 | m==1 | n==1 | d==1)
      //  return d;

    for (int i = 1; i <= d; ++i){
        if(i % k == 0)
            continue;
        else if (i % l == 0)
            continue;
        else if (i % m == 0)
            continue;
        else if (i % n == 0)
            continue;
        else
            ++acumulate;
    }

    acumulate = d - acumulate;

    if (acumulate < 0)
        acumulate = 0;

    return (acumulate);
}