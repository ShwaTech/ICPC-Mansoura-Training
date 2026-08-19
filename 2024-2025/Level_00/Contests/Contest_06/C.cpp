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
 // اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد

using namespace std;


int main()
{
    ShwaTech

    // ai^3 + i^3 / aj^3 + j^3 = ai + i / aj + j
    // (ai + i)(ai^2 - i*ai + i^2) / (aj + j)(aj^2 - j*aj + j^2) = (ai + i) / (aj + j)
    // (ai^2 - i*ai + i^2) / (aj^2 - j*aj + j^2) = 1
    // (ai^2 - i*ai + i^2) = (aj^2 - j*aj + j^2)

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        map<ll, ll> mp;

        for (ll i = 1; i <= n; i++) {
            ll x; cin >> x;

            ll eq = x*x - i*x + i*i;
            mp[eq]++;
        }

        ll sum=0;
        for (auto &[_, cnt]: mp) {
            sum += cnt * (cnt - 1) / 2;
        }

        cout << sum << nl;
    }

    return 0;
}
