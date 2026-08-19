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
        string s, c, p;
        cin >> s >> c >> p;

        vector<int> minCost(26, INT_MAX);
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            int cost = c[i] - '0';

            minCost[idx] = min(minCost[idx], cost);
        }

        int ans=0;
        bool ok=true;

        for (char pi: p) {
            int idx = pi - 'a';

            if (minCost[idx] == INT_MAX) {
                ok=false;
                break;
            }

            ans += minCost[idx];
        }

        cout << (ok ? ans : -1) << nl;
    }

    return 0;
}
