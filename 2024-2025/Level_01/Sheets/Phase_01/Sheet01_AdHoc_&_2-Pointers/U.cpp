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
        int n, L, R; cin >> n >> L >> R;

        vector<int> colors(n+1);

        map<int, int> left_colors, right_colors;

        for (int i = 1; i <= n; ++i) {
            cin >> colors[i];

            if (i <= L) left_colors[colors[i]]++;
            else right_colors[colors[i]]++;
        }

        for (int i = 1; i <= n; ++i) {
            int mn = min(left_colors[i], right_colors[i]);

            left_colors[i] -= mn;
            right_colors[i] -= mn;

            L -= mn;
            R -= mn;
        }

        if (L < R) {
            swap(L, R);
            swap(left_colors, right_colors);
        }

        int ans=0;

        for (int i = 1; i <= n; ++i) {
            int extra = L - R;

            int half_colors = left_colors[i] / 2;

            int turn = min(half_colors * 2, extra);

            ans += turn / 2;

            L -= turn;
        }

        ans += (L - R) / 2 + (L + R) / 2;

        cout << ans << nl;
    }

    return 0;
}
