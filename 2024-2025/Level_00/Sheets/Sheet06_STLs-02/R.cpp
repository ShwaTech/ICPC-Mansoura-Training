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
 // اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد

using namespace std;


int main()
{
    ShwaTech

    int n, m; cin >> n >> m;

    set<int> alive;
    for (int i = 1; i <= n; ++i) alive.insert(i);

    vector<int> ans(n+1);

    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;

        int winner=x;

        auto it = alive.lower_bound(l);

        while (it != alive.end() && *it <= r) {
            if (*it == winner) {
                ++it;
            } else {
                ans[*it] = winner;

                auto Next = next(it);

                alive.erase(it);

                it = Next;
            }
        }
    }

    for (int i = 1; i <= n; ++i) cout << ans[i] << " ";

    return 0;
}
