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

    int n, m, s; cin >> n >> m >> s;

    vector<vector<ll>> Before_AC(n+1, vector<ll>(m+1, 0));
    vector<vector<ll>> prefix2D_AC(n+1, vector<ll>(m+1, 0));

    while (s--) {
        int c, p; string res;
        cin >> c >> p >> res;

        if (res != "AC") Before_AC[c][p]++;
        else prefix2D_AC[c][p] += Before_AC[c][p];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix2D_AC[i][j] += prefix2D_AC[i-1][j] + prefix2D_AC[i][j-1] - prefix2D_AC[i-1][j-1];
        }
    }

    int Q; cin >> Q;
    while (Q--) {
        int c1, p1, c2, p2;
        cin >> c1 >> p1 >> c2 >> p2;

        cout << prefix2D_AC[c2][p2]
                - prefix2D_AC[c2][p1-1]
                - prefix2D_AC[c1-1][p2]
                + prefix2D_AC[c1-1][p1-1] << nl;
    }


    return 0;
}
