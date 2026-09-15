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

bool Can (ll prefix, ll k, string &s) {
    ll steps=0;

    for (ll i = prefix; i >= 0; --i) {
        steps += ((10 - (s[i] + steps)) % 10) % 10;
    }

    return steps <= k;
}

int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        ll n, k; cin >> n >> k;

        string s; cin >> s;

        for  (char &digit: s) digit -= '0';

        ll L=0, R=n-1, ans=0;
        while (L <= R) {
            ll mid = L + (R - L) / 2;

            if (Can(mid, k, s)) {
                ans = mid + 1;
                L = mid + 1;
            } else {
                R = mid - 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
