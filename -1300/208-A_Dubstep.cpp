#include <iostream>
#include <string>

using namespace std;

void read(){
    int i = 0;
    string s;

    cin >> s;

    while (i < s.size()){
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i = i+3;
        }
        else{
            cout << s[i];
            if (s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
                cout << " ";
            }
            i++;
        }
    }

    return;
}

int main (){
    read();
    return 0;
}