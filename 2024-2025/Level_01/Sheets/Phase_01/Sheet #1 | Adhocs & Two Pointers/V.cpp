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
        int n, m, k; cin >> n >> m >> k;

        map<int, int> freq_a, freq_b;

        vector<int> a(n), b(m);
        for (int &ai: a) cin >> ai;
        for (int &bi: b) cin >> bi, freq_b[bi]++;

        int L=0, cnt=0, ans=0;

        for (int R = 0; R < m; R++) {
            freq_a[a[R]]++;
            if (freq_b[a[R]] >= freq_a[a[R]]) cnt++;
        }

        for (int R = m; R < n; R++) {
            if (cnt >= k) ans++;

            freq_a[a[R]]++;
            if (freq_b[a[R]] >= freq_a[a[R]]) cnt++;
            freq_a[a[L]]--;

            if (freq_b[a[L]] > freq_a[a[L]]) cnt--;
            L++;
        }

        if (cnt >= k) ans++;

        cout << ans << nl;
    }

    return 0;
}
