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

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<string> a(n);
        unordered_set<string> us;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            us.insert(a[i]);
        }

        for (string str: a) {
            bool ok = false;

            for (int i = 1; i < str.length(); i++) {
                string part1 = str.substr(0, i);
                string part2 = str.substr(i);

                if (us.count(part1) && us.count(part2)) {
                    ok = true;
                    break;
                }
            }

            cout << ok;
        }

        cout << nl;
    }

    return 0;
}
