#include <bits/stdc++.h>

using namespace std;

void read(){
    int n, e, m = 99999999;
    vector<int> nums;

    cin >> n;
    vector<int> dist (n,0);

    while(n--){
        cin >> e;
        nums.push_back(e);
    }

    //Obtainng all the distances
    int i;
    for (i = 1; i < nums.size(); ++i){
        dist[i-1] = abs(nums[i] - nums[i-1]);
        m = min (m, dist[i-1]);
    }
    //last number with first number
    dist[dist.size()-1] = abs(nums[0] - nums[nums.size()-1]);
    m = min (m, dist[dist.size()-1]);

    for (int k = 0; k < dist.size(); ++k){
        if (m == dist[k]){
            if (k == dist.size()-1){
                cout << k+1 << " 1" << endl;
                return;
            }
            else{
                cout << k+1 << " " << k+2 << endl;
                return;
            }
        }
    }

    return;

}

int main(){
    read();
    return 0;
}