#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

bool isUpper(char &c){
    if (c >= 65 && c <= 90)
        return true;
    return false;
}

bool isVowel(char &c){
    if (c == 65 || c == 97 || c == 79 || c == 111 || c == 89 || c == 121 || c == 69 || c == 101 || c == 85 || c == 117 || c == 73 || c == 105)
        return true;
    return false;
}

void read(){
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        if(!isVowel(s[i])){//Is consonant
            cout << ".";
            if(isUpper(s[i]))//Is uppercase
                cout << (char)(s[i]+32);
            else//Is lowercase
                cout << s[i];
        }
    }

    return;
}

int main(){
    read();
    return 0;
}