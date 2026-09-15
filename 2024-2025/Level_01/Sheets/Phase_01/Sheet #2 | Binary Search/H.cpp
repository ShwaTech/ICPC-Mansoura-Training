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

ll n, k;

bool Have_Meet_Needed (ll cookies, vector<ll> &need, vector<ll> &have) {
    ll magic_need=0;

    for (int i = 0; i < n; ++i) {
        ll total_cookies = need[i] * cookies;

        if (have[i] >= total_cookies) { continue; }

        magic_need += (total_cookies - have[i]);

        if (magic_need > k) { return false; }
    }

    return k >= magic_need;
}


int main()
{
    ShwaTech

    cin >> n >> k;

    vector<ll> need(n), have(n);
    for (ll &need_i: need) cin >> need_i;
    for (ll &have_i: have) cin >> have_i;

    ll L=0, R=2e9, mid, ans=0;

    while (L <= R) {
        mid = L + (R - L) / 2;

        if (Have_Meet_Needed(mid, need, have)) {
            ans = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    cout << ans << nl;

    return 0;
}
