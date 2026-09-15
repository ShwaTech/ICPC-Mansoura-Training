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

    int T; cin >> T;
    while (T--) {
        ll n, q; cin >> n >> q;

        map<ll, int> first, last;

        for (int i = 0; i < n; i++) {
            ll x; cin >> x;

            if (!first.count(x)) first[x] = i;
            last[x] = i;
        }

        while (q--) {
            ll s, g; cin >> s >> g;

            if (!first.count(s) || !first.count(g)) cout << "NO\n";
            else if (first[s] <= last[g]) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}
