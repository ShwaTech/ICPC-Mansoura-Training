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

bool can_fit (int i, int j, int n, int m) {
    return (i >= 1 && j >= 1 && i <= n && j <= m);
}


int main()
{
    ShwaTech

    int n, m; cin >> n >> m;
    int h, w; cin >> h >> w;

    vector<vector<int>> grid(n+2, vector<int>(m+2));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> grid[i][j];

    vector<vector<int>> prefix2D=grid;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix2D[i][i]
            += prefix2D[i-1][j]
            + prefix2D[i][j-1]
            - prefix2D[i-1][j-1];
        }
    }

    vector<vector<int>> partial2D(n+2, vector<int>(m+2));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int x = i+h-1, y = j+w-1;

            if (can_fit(x, y, n, m)) {
                if (prefix2D[x][y] - prefix2D[i-1][y] - prefix2D[x][j-1] + prefix2D[i-1][j-1] == 0) {
                    partial2D[i][j]++;
                    partial2D[x+1][j]--;
                    partial2D[i][y+1]--;
                    partial2D[x+1][y+1]++;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            partial2D[i][j] += partial2D[i-1][j] + partial2D[i][j-1] - prefix2D[i-1][j-1];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!(grid[i][j] || partial2D[i][j])) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    return 0;
}
