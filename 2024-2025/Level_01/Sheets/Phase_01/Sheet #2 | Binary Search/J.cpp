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

    int n; cin >> n;

    vector<int> a(n+1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<ll> prefix(n+1);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i-1] + a[i];
    }

    int Q; cin >> Q;
    while (Q--) {
        int x; cin >> x;

        int idx = lower_bound(All(prefix), x) - prefix.begin();

        cout << idx << nl;
    }

    return 0;
}
