#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    string sum, aux;

    cin >> sum;

    for(int i = 0; i < sum.size(); ++i)
        if(sum[i] != '+') aux.push_back(sum[i]);
    
    sort(aux.begin(), aux.end());

    for(int i = 0, j = 0; i < sum.size(); ++i){
        if(i%2 == 0){
            cout << aux[j];
            ++j;
        }
        else cout << '+';
    }
    cout << endl;   
    
    return;
    
}

int main(){
    read();
    return 0;
}