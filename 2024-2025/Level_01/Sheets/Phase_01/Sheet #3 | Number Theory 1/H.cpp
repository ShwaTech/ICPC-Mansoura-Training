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


bool Is_Prime (int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    ShwaTech

    int T; cin >> T;
    for (int i = 1; i <= T; i++) {
        string s; cin >> s;

        map<char, int> freq;
        for (char c: s) {
            freq[c]++;
        }

        string ans="";
        for (auto it : freq) {
            if (Is_Prime(it.second)) {
                ans += it.first;
            }
        }

        sort(All(ans));

        cout << "Case " << i << ": ";
        cout << ( ans.size() ? ans : "empty" ) << nl;
    }

    return 0;
}
