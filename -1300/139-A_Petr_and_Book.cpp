#include <iostream>
#include <vector>

using namespace std;

void analyze(vector<int>& week, int bookPages){
    int i = -1;
    while(bookPages > 0){
        if (i == 6)
            i = -1;
        ++i;
        bookPages -= week[i];
    }

    cout << i+1 << endl;
    
    return;
}

void read(){
    vector<int> week;
    int bookPages = 0;
    int pages = 0;

    cin >> bookPages;

    for (int i = 1; i <= 7; ++i){
        cin >> pages;
        week.push_back(pages);
    }

    analyze(week, bookPages);

    return;
}

int main(){
    read();
    return 0;
}