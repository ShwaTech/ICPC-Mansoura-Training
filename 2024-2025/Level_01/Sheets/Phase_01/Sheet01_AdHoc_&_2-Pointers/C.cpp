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

    int n, q; cin >> n >> q;

    vector<vector<int>> forest(n+1, vector<int>(n+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c; cin >> c;

            if (c == '*') forest[i][j] = 1;
        }
    }

    vector<vector<int>> prefix2D = forest;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            prefix2D[i][j] += prefix2D[i-1][j] + prefix2D[i][j-1] - prefix2D[i-1][j-1];

    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll ans =
            prefix2D[x2][y2]
            - prefix2D[x1-1][y2]
            - prefix2D[x2][y1-1]
            + prefix2D[x1-1][y1-1];

        cout << ans << nl;
    }

    return 0;
}
