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

    int n, op, Q; cin >> n >> op >> Q;

    vector<ll> a(n+1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<pair<pair<int, int>, int>> operations(op+1);
    // <<L, R>, d>

    vector<ll> partial_ops(op+2), partial_sum(n+2);

    for (int i = 1; i <= op; ++i) {
        int L, R, d; cin >> L >> R >> d;

        operations[i].first.first = L;
        operations[i].first.second = R;
        operations[i].second = d;
    }

    while (Q--) {
        int L, R; cin >> L >> R;

        partial_ops[L]++;
        partial_ops[R+1]--;
    }

    for (int i = 1; i <= op; ++i) {
        partial_ops[i] += partial_ops[i-1];
    }

    for (int i = 1; i <= op; ++i) {
        int L = operations[i].first.first;
        int R = operations[i].first.second;
        int d = operations[i].second;

        partial_sum[L] += (d * partial_ops[i]);
        partial_sum[R + 1] -= (d * partial_ops[i]);
    }

    for (int i = 1; i <= n; ++i) {
        partial_sum[i] += partial_sum[i-1];
    }

    for (int i = 1; i <= n; ++i) {
        a[i] += (partial_sum[i]);

        cout << a[i] << " ";
    }

    return 0;
}
