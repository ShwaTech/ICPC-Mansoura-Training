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

    int n; cin >> n;

    vector<int> a(n+1), a_sorted(n+1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) a_sorted[i] = a[i];
    sort(a_sorted.begin() + 1, a_sorted.end());

    vector<ll> prefix(n+1), prefix_sorted(n+1);

    prefix[1] = a[1];
    for (int i = 2; i <= n; i++) prefix[i] = prefix[i-1] + a[i];

    prefix_sorted[1] = a_sorted[1];
    for (int i = 2; i <= n; i++) prefix_sorted[i] = prefix_sorted[i-1] + a_sorted[i];

    int m; cin >> m;
    while (m--) {
        int t, l ,r; cin >> t >> l >> r;

        if (t == 1) cout << prefix[r] - prefix[l-1] << endl;
        else cout << prefix_sorted[r] - prefix_sorted[l-1] << endl;
    }

    return 0;
}
