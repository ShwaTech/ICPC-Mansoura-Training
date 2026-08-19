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

int n;

bool Can (int k, vector<pair<int, int>> &a) {
    int Left=0, Right=0;

    for (int i = 0; i < n; i++) {
        if (Left - k > a[i].second) { return false; }

        if (Right + k < a[i].first) { return false; }

        Left = max(Left - k, a[i].first);
        Right = min(Right + k, a[i].second);
    }

    return true;
}


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        cin >> n;

        vector<pair<int, int>> a(n);


        for (int i = 0; i < n; i++) {
            int L, R; cin >> L >> R;

            a[i] = make_pair(L, R);
        }

        int L=0, R=1e9, ans=0;

        while (L <= R) {
            int mid = L + (R - L) / 2;

            if (Can(mid, a)) {
                ans = mid;
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
