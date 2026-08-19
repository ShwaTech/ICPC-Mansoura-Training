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
 // اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد

int MAX=1e4+5;

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n, q; cin >> n >> q;

        string s; cin >> s;

        vector<vector<int>> pref(26, vector<int>(MAX));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                pref[j][i+1] = pref[j][i];
            }
            pref[s[i] - 'a'][i+1]++;
        }

        while (q--) {
            ll L, R; char c;
            cin >> L >> R >> c;

            int sum_R = ((R/n) * pref[c - 'a'][n] + pref[c - 'a'][R % n]);
            int sum_L = (((L-1)/n) * pref[c - 'a'][n] + pref[c - 'a'][(L-1) % n]);

            cout << sum_R - sum_L << nl;
        }
    }

    return 0;
}
