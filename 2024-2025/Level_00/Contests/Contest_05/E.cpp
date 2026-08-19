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
        int n, q; cin >> n >> q;

        vector<ll> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<ll> build(n+1, 0);

        for (int i = 1; i <= n; i++) {
            ll x=a[i], c=0;
            while (x > 1) {
                if (x & 1) x--;
                else x >>= 1;

                c++;
            }

            build[i] = c;
        }

        vector<ll> prefix(n+1, 0);
        for (int i = 1; i <= n; ++i) prefix[i] = prefix[i-1] + build[i];

        while (q--) {
            int l, r; cin >> l >> r;

            cout << prefix[r] - prefix[l-1] << nl;
        }
    }

    return 0;
}
