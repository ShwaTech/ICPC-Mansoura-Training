// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n, Q; cin >> n >> Q;

        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        ll total_sum=0;
        for (int i = 1; i <= n; i++) total_sum += a[i];

        vector<ll> prefix(n+1);
        prefix[1] = a[1];
        for (int i = 2; i <= n; i++) prefix[i] = prefix[i-1] + a[i];

        while (Q--) {
            int l, r, k; cin >> l >> r >> k;

            ll segment = prefix[r] - prefix[l-1];

            ll new_sum = total_sum - segment + 1LL * (r - l + 1) * k;

            if (new_sum & 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}
