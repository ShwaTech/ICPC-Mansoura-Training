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

    int n, m, x, y; cin >> n >> m >> x >> y;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    vector<vector<ll>> prefix(n, vector<ll>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prefix[i][j] = matrix[i][j];

            // Add value from top cell if it exists
            if (i) prefix[i][j] += prefix[i - 1][j];

            // Add value from left cell if it exists
            if (j) prefix[i][j] += prefix[i][j - 1];

            // Subtract overlap from top-left diagonal if it exists
            if (i && j) prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    ll ans = LLONG_MIN;

    for (int i = 0; i+x-1 < n; i++) {
        for (int j = 0; j+y-1 < m; j++) {

            int r = i+x-1, c = j+y-1;

            ll sum = prefix[r][c];

            if (i) sum -= prefix[i - 1][c];
            if (j) sum -= prefix[r][j - 1];
            if (i && j) sum += prefix[i - 1][j - 1];

            ans = max(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}
