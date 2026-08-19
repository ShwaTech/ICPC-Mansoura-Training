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


int main()
{
    ShwaTech

    int T; cin >> T;

    while (T--) {
        int n; ll m; cin >> n >> m;

        vector<ll> a(n);
        for (ll &ai: a) cin >> ai;

        sort(All(a));

        if (a.front() > m) {
            cout << 0 << nl;
            continue;
        }

        int L=0, R=1;
        ll ans=0;
        ll curr=a[L];

        while (L < n) {
            if (R < n && a[R] - a[L] <= 1 && curr + a[R] <= m) {
                curr += a[R++];
            } else {
                curr -= a[L++];
            }

            ans = max(ans, curr);
        }

        cout << max(a.front(), ans) << nl;
    }

    return 0;
}
