// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin()+1,v.begin()+n+1
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        string s; cin >> s;

        int n = s.size(), ans=0;

        for (int k = 1; k <= n; k++) {
            vector<ll> prefix {0}, indexes;

            for (int i = 0; i + k < n; i++) {
                if (s[i] == s[i+k] || s[i] == '?' || s[i+k] == '?') {
                    prefix.push_back(i);
                }
            }

            indexes = prefix;

            for (int i = 1; i < prefix.size(); i++) {
                prefix[i] += prefix[i-1];
            }

            for (int i = k; i < prefix.size(); i++) {
                ll End = ( indexes[i] * (indexes[i] + 1) ) / 2;
                ll Start = ( (indexes[i] - k) * ( (indexes[i] - k) + 1) ) / 2;

                if (prefix[i] - prefix[i-k] == End - Start) {
                    ans = k * 2;
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}

// // ---------------------------------------------
// // ------------------- OR ----------------------
// // ---------------------------------------------

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin()+1,v.begin()+n+1
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        string s; cin >> s;

        int n = s.size(), ans=0;

        for (int k = 1; k < n/2+1; k++) {
            int cnt=0;

            for (int i = 0; i < n - k; i++) {
                cnt += (s[i] == s[i + k]) or (s[i] == '?') or (s[i + k] == '?');

                if (i - k >= 0) {
                    cnt -= (s[i] == s[i - k]) or (s[i] == '?')or (s[i - k] == '?');
                }

                if (i - k >= -1 && cnt == k) {
                    ans = 2 * k;
                }
            }
        }

        cout << ans << nl;
    }

    return 0;
}
