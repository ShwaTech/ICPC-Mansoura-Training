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
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

ll n, t;

bool Can_Make_Product (ll time, vector<ll> &machines) {
    ll total_products=0;
    for (int i = 0; i < n; i++) {
        total_products += time / machines[i];

        if (total_products >= t) {
            return true;
        }
    }

    return false;
}


int main()
{
    ShwaTech

    cin >> n >> t;

    vector<ll> machines(n);
    for (ll &machine_i: machines) cin >> machine_i;

    ll L=1, R=1e18, mid, ans=0;

    while (L <= R) {
        mid = L + (R - L) / 2;

        if (Can_Make_Product(mid, machines)) {
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
