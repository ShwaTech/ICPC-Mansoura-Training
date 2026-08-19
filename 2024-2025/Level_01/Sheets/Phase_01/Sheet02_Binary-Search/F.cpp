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

int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n, q; cin >> n >> q;

        vector<ll> a(n);
        for (ll &ai: a) cin >> ai;

        sort(RAll(a));

        for (int i = 1; i < n; i++) {
            a[i] += a[i-1];
        }

        while (q--) {
            int x; cin >> x;

            ll L=0, R=n-1, mid, ans=-1;

            while (L <= R) {
                mid = L + (R - L) / 2;

                if (a[mid] >= x) {
                    ans = mid+1;
                    R = mid - 1;
                } else {
                    L = mid + 1;
                }
            }

            cout << ans << nl;
        }

        // while (q--) {
        //     int x; cin >> x;
        //
        //     ll idx = lower_bound(All(a), x) - a.begin();
        //
        //     if (idx == n) cout << -1 << nl;
        //     else cout << idx + 1 << nl;
        //
        // }

    }

    return 0;
}
