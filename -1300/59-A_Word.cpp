#include <bits/stdc++.h>

using namespace std;

int count (string &c, int n);
void to_lowercase(string &c, int n);
void to_uppercase(string &c, int n);

int main(){
    string cadena = {};

    while(cin >> cadena){
        if (count(cadena, cadena.size())==0)
            to_lowercase( cadena, cadena.size());
        else
            to_uppercase( cadena, cadena.size());
        
        cout << cadena << endl;
    }

    return 0;
}

int count (string &c, int n){
    int M = 0, m = 0;

    while(n--){
        if(c[n] >= 65 && c[n] <= 90){
            ++M;
        }
        else if(c[n] >= 97 && c[n] <= 122){
            ++m;
        }
    }

    if (M>m)
        return 1;
    else
        return 0;
    
}

void to_lowercase(string &c, int n){
    while(n--){
        if ( c[n] >= 65 && c[n] <= 90 ){
            c[n] = c[n] + 32;
        }
    }
}

void to_uppercase(string &c, int n){
    while(n--){
        if ( c[n] >= 97 && c[n] <= 122 ){
            c[n] = c[n] - 32;
        }
    }
}