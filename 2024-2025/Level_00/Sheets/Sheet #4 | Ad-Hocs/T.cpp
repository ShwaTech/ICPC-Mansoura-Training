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

    int n, m; cin >> n >> m;

    vector<vector<bool>> solved(n+1, vector<bool>(m+1, false));
    vector<vector<int>> mistake(n+1, vector<int>(m+1, 0));

    int s; cin >> s;
    while (s--) {
        int c, p; string v;
        cin >> c >> p >> v;

        if (solved[c][p]) continue;

        if (v == "AC") solved[c][p]=true;
        else mistake[c][p]++;

    }

    vector<vector<int>> score(n+1, vector<int>(m+1, 0));

    for (int c = 1; c <= n; c++) {
        for (int p = 1; p <= m; p++) {
            if (solved[c][p])
                score[c][p] = mistake[c][p];
        }
    }

    vector<vector<ll>> prefix(n+1, vector<ll>(m+1, 0));

    for (int c = 1; c <= n; c++) {
        for (int p = 1; p <= m; p++) {
            prefix[c][p] =
                score[c][p]
                + prefix[c-1][p]
                + prefix[c][p-1]
                - prefix[c-1][p-1];
        }
    }

    int q; cin >> q;
    while (q--) {
        int c1, p1, c2, p2;
        cin >> c1 >> p1 >> c2 >> p2;

        ll ans =
            prefix[c2][p2]
            - prefix[c1-1][p2]
            - prefix[c2][p1-1]
            + prefix[c1-1][p1-1];

        cout << ans << endl;
    }

    return 0;
}
