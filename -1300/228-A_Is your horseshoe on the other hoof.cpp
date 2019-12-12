#include <bits/stdc++.h>

using namespace std;

int min_horseshoes(vector<int>& horseshoes, int n_horseshoes);

int main(){
    int n_horseshoes = 4, item = 0;
    vector <int> horseshoes = {};

    while (n_horseshoes--){
        cin >> item;
        horseshoes.push_back(item);
    }

    cout << min_horseshoes(horseshoes, 4);

    return 0;
}

int min_horseshoes(vector<int>& horseshoes, int n_horseshoes){
    int counter = 0;

    sort (horseshoes.begin(), horseshoes.end());

    for (int i = 0; i < n_horseshoes-1; ++i){
        if (horseshoes[i] == horseshoes [i+1])
            ++counter;        
    }

    return counter;
}