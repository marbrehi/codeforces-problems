#include <bits/stdc++.h>

using namespace std;

int min_cashes(vector<pair<int,int>>& arriving_times, int n_clients);

int main(){
    int n_clients = 0, minutes = 0, hours = 0;
    vector <pair<int,int>> arrving_times = {};
    pair<int,int> time;

    cin >> n_clients;

    while (n_clients--){
        cin >> hours;
        time.first = hours;
        cin >> minutes;
        time.second = minutes;
        arrving_times.push_back(time);
    }

    cout << min_cashes(arrving_times, arrving_times.size()-1);

    return 0;
}

int min_cashes(vector<pair<int,int>>& arriving_times, int n_clients){
    int MIN_CASHES = 1, cashes = 1;

    if (n_clients == 0)
        return 1;

    for (int k = n_clients; k > 0; --k){
        if ((arriving_times[k].first == arriving_times[k-1].first) && (arriving_times[k].second == arriving_times[k-1].second)){
            ++cashes;
        }
        else{
            cashes = 1;
        }

        MIN_CASHES = max(MIN_CASHES, cashes);
        
    }

    return MIN_CASHES;
}