// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// لا الاه الا الله وحده هو يتولي الصالحين
// ربي اني ظلمت نفسي، فاغفر لي
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم
// بسم الله نبدأ وعليه نتوكل

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
        string s; cin >> s;

        int n = s.size();

        vector<pair<char, int>> ans;

        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                ans.push_back(make_pair(s[i], n - i - 1));
            }
        }

        cout << ans.size() << nl;

        for (auto x: ans) {
            cout << x.first;

            for (int j = 0; j < x.second; j++) {
                cout << 0;
            }

            cout << " ";
        }

        cout << nl;

    }

    return 0;
}
