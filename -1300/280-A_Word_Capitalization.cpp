#include <bits/stdc++.h>

using namespace std;

int count (string &c, int n);
void to_lowercase(string &c, int n);
void to_uppercase(string &c, int n);

int main(){
    string cadena = {};

    while(cin >> cadena){
        if(cadena[0] >= 97 && cadena[0] <= 122){
            cadena[0] = cadena[0] - 32;
        }
        
        cout << cadena << endl;
    }

    return 0;
}