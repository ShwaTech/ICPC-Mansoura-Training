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

    multiset<ll> ms;

    int Q; cin >> Q;
    while (Q--) {
        string op; cin >> op;

        if (op == "push") {
            ll x; cin >> x;
            ms.insert(x);
        } else if (op == "top" ) {
            if (!ms.empty()) {
                auto top = ms.rbegin();
                cout << *top << nl;
            } else {
                cout << "IT IS JUST EMPTY\n";
            }
        } else {
            if (!ms.empty()) {
                auto it = prev(ms.end());
                ms.erase(it);
            } else {
                cout << "IT IS JUST EMPTY\n";
            }
        }
    }

    return 0;
}
