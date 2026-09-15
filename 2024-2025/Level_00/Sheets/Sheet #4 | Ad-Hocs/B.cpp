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

    int n, q; cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    while (q--) {
        int l, r, x; cin >> l >> r >> x;
        l--, r--;

        int ans=0;

        for (int i = l; i <= r; ++i) {
            if (a[i] == x) ++ans;
        }

        cout << ans << endl;
    }

    return 0;
}
