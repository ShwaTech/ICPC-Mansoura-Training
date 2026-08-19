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

    // Notice that for one query -> l r v
    // you add
    // v, 2v, 3v, 4v, ...
    // This is an arithmetic progression.
    //
    // For position i (l ≤ i ≤ r), the added value is
    // (i−l+1)×v
    // Rewrite it as
    // v⋅i − v(l−1)
    //
    // So each update is of the form
    // A⋅i + B
    // Where : A = v
    //         B = −v(l−1)

    int n, q; cin >> n >> q;

    vector<ll> coeff(n+2, 0), cons(n+2, 0), ans(n+1, 0);
    while (q--) {
        int l, r, v; cin >> l >> r >> v;

        ll A = v;
        ll B = -1LL * v * (l-1);

        coeff[l] += A;
        coeff[r+1] -= A;

        cons[l] += B;
        cons[r+1] -= B;
    }

    for (int i = 1; i <= n; ++i) {
        coeff[i] += coeff[i-1];
        cons[i] += cons[i-1];

        ans[i] = coeff[i] * i + cons[i];
    }

    for (int i = 1; i <= n; i++) cout << ans[i] << " ";

    return 0;
}
