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

// int prefix[11][1001][1001];

int main()
{
    ShwaTech
    freopen("pink.in", "r", stdin);

    int n, m; cin >> n >> m;

    // prefix[p][i][j] = number of monsters with power < p
    // in rectangle (1,1) -> (i,j)
    vector<vector<vector<int>>> prefix(11, vector<vector<int>>(n+1, vector<int>(m+1)));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int x; cin >> x;

            for (int p = 1; p <= 10; ++p) {
                prefix[p][i][j] = (x < p);
            }
        }
    }

    // Build a 2D Prefix Sum
    for (int p = 1; p <= 10; ++p) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                prefix[p][i][j] += prefix[p][i-1][j]
                                + prefix[p][i][j-1]
                                - prefix[p][i-1][j-1];
            }
        }
    }

    int Q; cin >> Q;
    while (Q--) {
        int x1, y1, x2, y2, p1;
        int a1, b1, a2, b2, p2;

        cin >> x1 >> y1 >> x2 >> y2 >> p1;
        cin >> a1 >> b1 >> a2 >> b2 >> p2;

        int mo7a =
            prefix[p1][x2][y2]
            - prefix[p1][x1-1][y2]
            - prefix[p1][x2][y1-1]
            + prefix[p1][x1-1][y1-1];

        int samo7a =
            prefix[p2][a2][b2]
            - prefix[p2][a1-1][b2]
            - prefix[p2][a2][b1-1]
            + prefix[p2][a1-1][b1-1];

        if (mo7a == 0 && samo7a == 0)
            cout << "Sameh\n";
        else if (mo7a > samo7a)
            cout << "Mo7a " << mo7a << "\n";
        else if (samo7a > mo7a)
            cout << "Samo7a " << samo7a << "\n";
        else
            cout << "Draw " << mo7a << "\n";
    }

    return 0;
}
