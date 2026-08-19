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
        int w, h, n;
        cin >> w >> h >> n;

        vector<vector<int>> partial(w+10, vector<int>(h+10, 0));

        while (n--) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            if (x1 > x2) swap(x1, x2);
            if (y1 > y2) swap(y1, y2);

            partial[x1][y1]++;
            partial[x1][y2+1]--;
            partial[x2+1][y1]--;
            partial[x2+1][y2+1]++;
        }

        for (int i = 1; i <= w; i++) {
            for (int j = 1; j <= h; j++) {
                partial[i][j]
                    += partial[i-1][j]
                    + partial[i][j-1]
                    - partial[i-1][j-1];
            }
        }

        ll c=0;
        for (int i = 1; i <= w; i++) {
            for (int j = 1; j <= h; j++) {
                if (partial[i][j] == 0) c++;
            }
        }

        cout << c << nl;
    }

    return 0;
}
