#include <iostream>
#include <vector>

using namespace std;

int min_lim_x = 1000, min_lim_y = 1000;
int max_lim_x = -1000, max_lim_y = -1000;

void readData(vector<pair<int,int>>& cordenades){
    pair <int,int> xy;
    int n, x, y;
    cin >> n;

    while (n--){
        cin >> x >> y;
        xy.first = x;
        xy.second = y;
        
        //comparamos los límites mínimos
        min_lim_x = min(min_lim_x, x);
        min_lim_y = min(min_lim_y, y);

        //comparamos los límites máximos
        max_lim_x = max(max_lim_x, x);
        max_lim_y = max(max_lim_y, y);

        cordenades.push_back(xy);

    }
    //cout << "Limits of x are: " << min_lim_x << "\t" << max_lim_x << endl;
    //cout << "Limits of y are: " << min_lim_y << "\t" << max_lim_y << endl;
}

bool prove(pair<int,int>& xy, vector<pair<int,int>>& cordenades){
    int flagx = 0;
    int x = xy.first;
    int y = xy.second;

    if (x > min_lim_x && x < max_lim_x)
        if (y > min_lim_y && y < max_lim_y){
            for(int i = 0; i < cordenades.size(); ++i){
                if (x == cordenades[i].first){
                    flagx == 1;
                    break;
                }
            }
            for(int i = 0; i < cordenades.size(); ++i){
                if (y == cordenades[i].second){
                    flag == 1;
                    break;
                }
            }
            return true;
        }
    return false;
}

void supercentrals(vector<pair<int,int>>& cordenades){
    int NUMBER = 0;

    for (int i = 0; i < cordenades.size(); ++i){
        pair<int,int> xy = cordenades[i];

        if (prove(xy))
            ++NUMBER;
    }

    cout << NUMBER << endl;

    return;
}

int main(){
    vector<pair<int,int>> cordenades;

    readData(cordenades);

    supercentrals(cordenades);

    return 0;
}