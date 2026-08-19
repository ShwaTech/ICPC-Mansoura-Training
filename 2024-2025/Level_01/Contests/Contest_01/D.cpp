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
        int n, m; cin >> n >> m;

        vector<ll> a(n);
        for (ll &ai: a) cin >> ai;

        ll mx = *max_element(All(a));

        while (m--) {
            char C; int L, R;
            cin >> C >> L >> R;

            if (L <= mx && mx <= R) {
                if (C == '+') mx++;
                else mx--;
            }

            cout << mx << " ";
        }

        cout << nl;
    }

    return 0;
}
