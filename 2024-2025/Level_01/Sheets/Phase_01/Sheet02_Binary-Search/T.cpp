// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

bool Can (ll rents, ll k, vector<ll> &personal_money, vector<ll> &prices) {
    ll shared=0;

    for (int i = 0; i < rents; i++) {
        shared += max(0LL, prices[i] - personal_money[rents - 1 - i]);
    }

    return shared <= k;
}


int main()
{
    ShwaTech

    ll n, m, k; cin >> n >> m >> k;

    vector<ll> personal_money(n), prices(m);
    for (ll &money: personal_money) cin >> money;
    for (ll &price: prices) cin >> price;

    sort(RAll(personal_money));
    sort(All(prices));

    ll L=0, R=min(n, m), boys_rent=0;

    while (L <= R) {
        ll mid = L + (R - L) / 2;

        if (Can(mid, k, personal_money, prices)) {
            boys_rent = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    ll total_rent_price=0;
    for (int i = 0; i < boys_rent; i++) {
        total_rent_price += prices[i];
    }

    cout << boys_rent << " " << max(0LL, total_rent_price-k);

    return 0;
}
