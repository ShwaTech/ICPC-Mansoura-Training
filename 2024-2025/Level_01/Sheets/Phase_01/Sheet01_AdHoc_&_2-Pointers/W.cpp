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
        int n; cin >> n;

        string s; cin >> s;

        vector<ll> prefix(n+1, 0);

        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1] + (s[i-1] - '0');
        }

        ll ans=0;
        map<ll, ll> freq;

        for (int i = 0; i <= n; i++) {
            ll key = prefix[i] - i;

            ans += freq[key];
            freq[key]++;
        }

        cout << ans << nl;
    }

    return 0;
}

// // --------------------------------
// // ----------- OR------------------
// // --------------------------------

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
        int n; cin >> n;

        string s; cin >> s;

        map<ll, ll> freq;
        freq[0] = 1;

        ll ans = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            sum += s[i] - '0';
            ll key = sum - i - 1;
            ans += freq[key];
            freq[key]++;
        }

        cout << ans << nl;
    }

    return 0;
}
