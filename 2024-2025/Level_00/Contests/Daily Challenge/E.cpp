// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int T; cin>>T;
    while (T--) {
        string s1, s2; cin >> s1 >> s2;

        if (s1 == s2) {
            cout << "yes\n";
            continue;
        }

        if (s1.length() != s2.length()) {
            cout << "no\n";
            continue;
        }

        sort(All(s1)); sort(All(s2));

        cout << (s1 == s2  ? "yes\n" : "no\n");
    }

    return 0;
}
