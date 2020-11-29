#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define tab " "
#define lli long long int

void read(){
    lli n, mini = 10e9, city, ans = 0, index;
    bool flag = 0;
    vector<lli> cities;

    cin >> n;

    for(lli i = 0; i < n; ++i){
        cin >> city;
        cities.push_back(city);
        if(mini > city){
            index = i + 1;
            mini = city;
        }
    }

    sort(cities.begin(), cities.end());

    if(cities[0] == cities[1])
        cout << "Still Rozdil" << endl;
    else
        cout << index << endl;
    
    return;
    
}

int main(){
    read();
    return 0;
}