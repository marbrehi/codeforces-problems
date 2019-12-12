#include <bits/stdc++.h>

using namespace std;

int main(){
    int y = 0, year = 0, m = 0, d = 0, c = 0, u = 0;
    bool comparation = 0;

    cin >> y;
    year = y + 1;

    while (comparation != 1){
        m = year/1000;
        d = (year - (m * 1000))/100; //ok
        c = (year - (d * 100) - ((m * 1000)))/10;
        u = (year - (c * 10) - ((m * 1000)) - ((d * 100)))/1;
        //cout << m << "_" << d << "_" << c << "_" << u << endl;
        if ((m != d & m != c & m != u & d != c & d != u & c != u) == 1){
            cout << year << endl;
            comparation = 1;
        }
        else{
            //cout << "bai " << endl;
            comparation = 0;
        }
        ++year;
    }

    return 0;
}