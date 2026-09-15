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

    set<ll> s;

    int Q; cin >> Q;
    while (Q--) {
        string op; ll x;
        cin >> op >> x;

        if (op == "insert") {
            s.insert(x);
        } else if (op == "lower_bound") {
            auto it = s.lower_bound(x);
            if (it != s.end()) cout << *it << nl;
            else cout << -1 << nl;
        } else if (op == "upper_bound") {
            auto it = s.upper_bound(x);
            if (it != s.end()) cout << *it << nl;
            else cout << -1 << nl;
        } else {
            cout << (s.count(x) ? "found" : "not found") << nl;
        }
    }

    return 0;
}
