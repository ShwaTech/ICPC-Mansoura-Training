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
        int n; cin >> n;

        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        vector<int> satisfying;

        ll ans=0;

        for (int idx = 1; idx <= n; ++idx) {
            if (a[idx] < idx) {
                ans += lower_bound(All(satisfying), a[idx]) - satisfying.begin();

                satisfying.push_back(idx);
            }
        }

        cout << ans << nl;
    }

    return 0;
}
