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
        int n; string s;
        cin >> n >> s;

        vector<int> prefix(n), suffix(n);

        vector<int> vis(26, 0); int c=0;

        for (int i = 0; i < n; i++) {
            if (!vis[s[i] - 'a']) {
                vis[s[i] - 'a'] = 1;
                c++;
            }
            prefix[i] = c;
        }

        fill(All(vis), 0);
        c=0;

        for (int i = n-1; i >= 0; i--) {
            if (!vis[s[i] - 'a']) {
                vis[s[i] - 'a'] = 1;
                c++;
            }
            suffix[i] = c;
        }

        int ans=0;
        for (int i = 0; i < n-1; i++) {
            ans = max(ans, prefix[i] + suffix[i+1]);
        }

        cout << ans << nl;
    }

    return 0;
}
