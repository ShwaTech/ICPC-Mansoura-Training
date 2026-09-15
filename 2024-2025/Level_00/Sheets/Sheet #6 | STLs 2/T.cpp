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
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &ai: a) cin >> ai;

        set<ll> first, s, last;
        map<ll, ll> mp;

        for (int i = 0; i < n; i++) {
            if (s.count(a[i]) == 0) first.insert(i);
            s.insert(a[i]);
            mp[a[i]] = i;
        }

        for (auto m: mp) last.insert(m.second);

        ll ans=0, c=0;
        for (int i = n-1; i >= 0; i--) {
            if (last.count(i)) c++;
            if (first.count(i)) ans += c;
        }

        cout << ans << nl;
    }

    return 0;
}
