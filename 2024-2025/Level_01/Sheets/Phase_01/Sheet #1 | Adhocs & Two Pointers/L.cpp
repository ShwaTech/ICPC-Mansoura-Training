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

const int m = 1003;

using namespace std;


int main()
{
    ShwaTech

    freopen("paintbarn.in", "r", stdin);
    freopen("paintbarn.out", "w", stdout);

    int n, k; cin >> n >> k;

    vector<vector<ll>> partial2D (m, vector<ll> (m, 0));

    while (n--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1++; y1++; x2++; y2++;

        partial2D[x1][y1]++;
        partial2D[x1][y2]--;
        partial2D[x2][y1]--;
        partial2D[x2][y2]++;
    }

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < m; j++) {
            partial2D[i][j] += partial2D[i-1][j] + partial2D[i][j-1] - partial2D[i-1][j-1];
        }
    }

    ll c=0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (partial2D[i][j] == k) c++;
        }
    }

    cout << c;

    return 0;
}
