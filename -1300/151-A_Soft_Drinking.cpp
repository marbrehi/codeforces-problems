#include <bits/stdc++.h>

using namespace std;

#define UI unsigned int

UI toasts (UI n_friends, UI mil_soft_drink, UI slices, UI grams_salt, UI need_drink, UI need_salt);

int main(){
    UI n, k, l , c, d, p, nl, np;
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << toasts (n, k*l, c*d, p, nl, np) << endl;

    return 0;
}

UI toasts (UI n_friends, UI mil_soft_drink, UI slices, UI grams_salt, UI need_drink, UI need_salt){
    UI enough_soft_drink = mil_soft_drink / need_drink;
    UI enough_salt = grams_salt / need_salt;
    
    UI res = min(enough_salt,enough_soft_drink);

    return (min(res ,slices) / n_friends);

}