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

const int MAX=1001;

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n, Q; cin >> n >> Q;

        vector<vector<ll>> prefix2D(MAX, vector<ll>(MAX, 0));

        while (n--) {
            ll h, w; cin >> h >> w;

            prefix2D[h][w] += h * w;
        }

        for (int i = 1; i < MAX; ++i) {
            for (int j = 1; j < MAX; ++j) {
                prefix2D[i][j] += prefix2D[i-1][j] + prefix2D[i][j-1] - prefix2D[i-1][j-1];
            }
        }

        while (Q--) {
            ll h1, w1, h2, w2;
            cin >> h1 >> w1 >> h2 >> w2;

            cout << prefix2D[h2-1][w2-1]
                    - prefix2D[h2-1][w1]
                    - prefix2D[h1][w2-1]
                    + prefix2D[h1][w1] << nl;
        }
    }

    return 0;
}
