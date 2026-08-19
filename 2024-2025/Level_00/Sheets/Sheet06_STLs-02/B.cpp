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

    map<string, ll> m;

    int N, Q; cin >> N >> Q;
    while (N--) {
        string name; ll money;
        cin >> name >> money;

        m[name] += money;
    }

    while (Q--) {
        int x; cin >> x;

        if (x == 1) {
            string name; ll bonus;
            cin >> name >> bonus;

            m[name] += bonus;
        } else {
            string name; cin >> name;

            cout << m[name] << nl;
        }
    }

    return 0;
}
