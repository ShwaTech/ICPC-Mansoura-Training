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

    int n, m; cin >> n >> m;

    vector<vector<int>> a(n+1, vector<int>(m+1));
    vector<vector<int>> c(n+1, vector<int>(m+1));
    vector<vector<int>> e(n+1, vector<int>(m+1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char ch; cin >> ch;
            a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + (ch == 'a');
            c[i][j] = c[i-1][j] + c[i][j-1] - c[i-1][j-1] + (ch == 'c');
            e[i][j] = e[i-1][j] + e[i][j-1] - e[i-1][j-1] + (ch == 'e');
        }
    }

    int Q; cin >> Q;
    while (Q--) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        ll total_a =
            a[r2][c2]
            - a[r1-1][c2]
            - a[r2][c1-1]
            + a[r1-1][c1-1];

        ll total_c =
            c[r2][c2]
            - c[r1-1][c2]
            - c[r2][c1-1]
            + c[r1-1][c1-1];

        ll total_e =
            e[r2][c2]
            - e[r1-1][c2]
            - e[r2][c1-1]
            + e[r1-1][c1-1];

        cout << min({total_a, total_c, total_e}) << nl;
    }

    return 0;
}
